#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <semaphore.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <unistd.h>
#include <signal.h>
#include <limits.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#include "sirik_lic.h"
#include "sirik_core.h"

/*
struct timeval 
{
	time_t      tv_sec;     //	seconds
	suseconds_t tv_usec;    //	microseconds
};

time_t epoch = 0;
asctime(gmtime(&epoch))

struct time_t
{
	int    tm_sec   seconds [0,61]
	int    tm_min   minutes [0,59]
	int    tm_hour  hour [0,23]
	int    tm_mday  day of month [1,31]
	int    tm_mon   month of year [0,11]
	int    tm_year  years since 1900
	int    tm_wday  day of week [0,6] (Sunday = 0)
	int    tm_yday  day of year [0,365]
	int    tm_isdst daylight savings flag
}

struct tm tm_expiry;
	memset( &tm_expiry, 0, sizeof( struct tm));
	
	tm_expiry.tm_year 	= 2020-1900;
	tm_expiry.tm_mon 	= 8;	// 0 - jan, 11 - dec
	tm_expiry.tm_mday 	= 8;	//expiry date
	tm_expiry.tm_hour	= 24;
 	tm_expiry.tm_min	= 0;
	tm_expiry.tm_sec	= 0;
		
	time_t timx = mktime( &tm_expiry);
	
	struct timezone tzone;
	struct timeval ctimeval;
	
	memset( &tzone, 0, sizeof(struct timezone));
	memset( &ctimeval, 0, sizeof(struct timeval));
	gettimeofday( &ctimeval, &tzone);
	if( (timx - ctimeval.tv_sec) < 0 || (timx - ctimeval.tv_sec) >= 86400)
	
	char hex[] = "6A";                          // here is the hex string
	int num = (int)strtol(hex, NULL, 16);       // number base 16
	printf("%c\n", num);                        // print it as a char
	printf("%d\n", num);                        // print it as decimal
	printf("%X\n", num);                        // print it back as hex

*/

typedef struct __licInput
{
	int alg;
	long prodId;
	long serialNo;
	char mac[13];
	char created_date[11];
	char start_date[11];
	char end_date[11];
	char company_name[50];
	char company_address[50];
	char cpuid[20];						// device-id
	int validateCpuId;					//
	char issuing_auth[21];
	char issuing_auth_address[21];
} si_licInput;

void __sirik_lic__test_time()
{
}

int __sirik_lic__str_to_tm( struct tm * tmout, char * strdate)
{
	char * partPtr = NULL, * savePtr = NULL;
	
	int iYear = 0;
	int iMonth = 0;
	int iDate = 0;
	
	partPtr = strtok_r( strdate, (char *)"-", &savePtr);
	
	if( partPtr)
	{	
		printf("1. part=%s part-2=%s\n", partPtr, savePtr);
		iYear = atoi( partPtr);
		
		if( iYear < 2020)
		{
			printf("invalid year entered %d\n", iYear);
			return -1;
		}
	}
	else
	{
		return -2;
	}
	
	partPtr = strtok_r( savePtr, (char *)"-", &savePtr);
	
	if( partPtr)
	{
		printf("2. part=%s part-2=%s\n", partPtr, savePtr);
		
		iMonth = atoi( partPtr);
		if( iMonth < 0 || iMonth > 12)
		{
			printf("invalid month entered %d\n", iMonth);
			return -3;
		}
		
	}
	else
	{
		return -4;
	}
	
	partPtr = strtok_r( savePtr, (char *)"-", &savePtr);
	
	if( partPtr)
	{
		printf("3. part=%s part-2=%s\n", partPtr, savePtr);
		
		iDate = atoi( partPtr);
		if( iDate < 0 || iDate > 31)
		{
			printf("invalid date entered %d\n", iDate);
			return -5;
		}
	}
	else
	{
		return -6;
	}

	printf("date data=%04d-%02d-%02d\n", iYear, iMonth, iDate);
	
	tmout->tm_year 	= iYear-1900;
	tmout->tm_mon 	= (iMonth-1);		// 0 - jan, 11 - dec
	tmout->tm_mday 	= iDate;			//expiry date
	tmout->tm_hour	= 24;
 	tmout->tm_min	= 0;
	tmout->tm_sec	= 0;
	
	return 1;
}

void __sirik_lic__encrypt_licensefile( SI_License * siLicense, char * buff, int * len)
{
	struct timeval tv;
	struct timezone tzone;
	gettimeofday( &tv, &tzone);
	struct tm *timeinfo = gmtime( &tv.tv_sec);
	
	char mBuffer[2048];
	memset( mBuffer, 0, sizeof( mBuffer));	
	
	Base64encode( mBuffer, (const char *)siLicense, sizeof( SI_License));

	const char xx[] =
    "wA4B5C2D1E5FhGlHpIpJdKgLaMtNyOrPwQrRsSqTqUdVaWqXcYdZabcdefghijklmnopqrstuvwxyz0123456ww7892+/wA4B5C2D1E5FhGlHpIpJdKgLaMtNyOrPwQrRsSqTqUdVaWqXcYdZabcdefghijklmnopqrstuvwxyz0123456ww7892+/wA4B5C2D1E5FhGlHpIpJdKgLaMtNyOrPwQrRsSqTqUdVaWqXcYdZabcdefghijklmnopqrstuvwxyz0123456ww7892+/";
	
	int b64_len = strlen( mBuffer);
	int i = 0;
	int jMax = 60;
	int jc = 0;
	int bLen = 0;
	
	if( siLicense->algId == 2)
		jMax = 90;
	
	for( i = 0; i < b64_len; i++)
	{
		buff[bLen] = mBuffer[i];
		bLen++;
		
		if( jc < jMax)
		{
			buff[bLen] = xx[ timeinfo->tm_sec + jc];
			jc++;
			bLen++;
		}
	}
	
	*len = bLen;
	
	//printf("\n\n");
}


void __sirik_lic__create_licensefile( si_licInput * si_licInput)
{
	SI_License * siLicense = (SI_License *) malloc( sizeof(SI_License));
	memset( siLicense, 0, sizeof( SI_License));
	
	switch( si_licInput->alg)
	{
		case 1:
			siLicense->algId = 1;
			memcpy( siLicense->alg, "%ELG-91%", 8);
			break;
		case 2:
			siLicense->algId = 2;
			memcpy( siLicense->alg, "%CDX-87%", 8);
			break;
		default:
			break;
	}
	
	siLicense->productId = si_licInput->prodId;
	siLicense->serialNo = si_licInput->serialNo;
	strcpy( siLicense->company_short_name, si_licInput->company_name);
	strcpy( siLicense->company_address, si_licInput->company_address);

	__sirik_lic__str_to_tm( &siLicense->start_date, si_licInput->start_date);
	__sirik_lic__str_to_tm( &siLicense->expiry_date, si_licInput->end_date);
	
	__si_conver_str_to_hex( siLicense->mac, si_licInput->mac);
	
	printf("mac %02X:%02X:%02X:%02X:%02X:%02X\n", 
		siLicense->mac[0] & 0xFF,siLicense->mac[1] & 0xFF,siLicense->mac[2] & 0xFF,
		siLicense->mac[3] & 0xFF,siLicense->mac[4] & 0xFF,siLicense->mac[5] & 0xFF);
	
	strcpy( siLicense->issuing_auth, si_licInput->issuing_auth);
	strcpy( siLicense->issuing_auth_address, si_licInput->issuing_auth_address);

	siLicense->validateCpuId = si_licInput->validateCpuId;
	strcpy( siLicense->cpuid, si_licInput->cpuid);
	
	

	char mBuffer[4096];
	memset( mBuffer, 0, sizeof( mBuffer));
	int len_out = 0;
	__sirik_lic__encrypt_licensefile( siLicense, mBuffer, &len_out);
	

	


	struct timeval tv;
	struct timezone tzone;
	gettimeofday( &tv, &tzone);

	struct tm * timeinfo = gmtime( &tv.tv_sec);
	memcpy( &siLicense->created_date, timeinfo, sizeof(struct tm));
	
	char mFileNameBuffer[500];
	memset( &mFileNameBuffer, 0, 500);
	
	sprintf( mFileNameBuffer, "%s/%s_%d%02d%02d_%u_%u", ".", siLicense->issuing_auth, 
		(siLicense->created_date.tm_year) + 1900, (siLicense->created_date.tm_mon) + 1, siLicense->created_date.tm_mday, 
		siLicense->productId, siLicense->serialNo);
		
	printf( "FILE-NAME=%s\n", mFileNameBuffer);
	
	
	
	int iUmask 				= S_IWGRP | S_IWOTH;
	int iFileCreationMode 	= S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	int iFlags 				= O_WRONLY | O_CREAT | O_APPEND;
	int iOldUmask 			= umask( iUmask);
	
	
	int iHandle = open( mFileNameBuffer, iFlags, iFileCreationMode);	
	umask( iOldUmask);
	
	write( iHandle, siLicense->alg, 8);
	write( iHandle, mBuffer, len_out);
	close( iHandle);
	/**/
}

void sirik_lic__create_interface()
{
	si_licInput licInput;
	memset( &licInput, 0, sizeof( si_licInput));

	char input[50];
	memset( input, 0, sizeof(input));
	
	printf("please enter ALG:\n\t1 ELG-91\n\t2 CDX-87\n");
	scanf( "%s", input);
	
	licInput.alg = atol( input);
	
	if( !(licInput.alg >= 0 && licInput.alg <= 2))
	{
		printf("invalid alg\n");
		exit(0);
	}
	
	printf("please enter product id:\n\t14 M3UA\n\t15 SMPP\n");
	scanf( "%s", input);
	
	licInput.prodId = atol( input);
	printf("product-id=%s ::%ld\n\n", input, licInput.prodId);
	
	printf("please enter serial no:\n");
	scanf( "%s", input);
	
	licInput.serialNo = atol( input);
	printf("serialNo=%s ::%ld\n\n", input, licInput.serialNo);
	
	
	printf("please enter MAC address in CAPITALS, example : AABBCCDDEEFF\n");
	scanf( "%s", licInput.mac);
	printf("mac=%s\n\n", licInput.mac);
	
	if( strlen(licInput.mac) != 12)
	{
		printf("invalid MAC address, length should be 12 char(6 bytes)\n");
		exit(0);
	}
	
	
	printf("please enter start-date YYYY-MM-DD\n");
	scanf( "%s", licInput.start_date);
	printf("start-date=%s\n\n", licInput.start_date);
	
	printf("please enter end-date YYYY-MM-DD\n");
	scanf( "%s", licInput.end_date);
	printf("end-date=%s\n\n", licInput.end_date);

	printf("please enter company-name\n");
	scanf( "%s", licInput.company_name);
	printf("company-name=%s\n\n", licInput.company_name);
	
	printf("please enter company-address\n");
	scanf( "%s", licInput.company_address);
	printf("company-address=%s\n\n", licInput.company_address);
	
	printf("please enter issuing_auth\n");
	scanf( "%s", licInput.issuing_auth);
	printf("issuing-auth=%s\n\n", licInput.issuing_auth);
	
	licInput.validateCpuId = 1;
	
	printf("please enter cpu-id\n");
	scanf( "%s", licInput.cpuid);
	
	if( licInput.cpuid[0] == '.')
		memset( licInput.cpuid, 0, sizeof(licInput.cpuid));
	
	printf("cpu-id=%s\n\n", licInput.cpuid);
	
	__sirik_lic__create_licensefile( &licInput);	
}


int __si_lic__load_license( char * filename);
int __si_ValidateLicenseWithExpiryDate( int prodId);
int __si_ValidateDeviceId();

//gcc -g3 -o sirik_lic sirik_core.c sirik_lic.c -lpthread 
int main(int argc, char* argv[])
{
	printf("sirik license util ...\n");
	
	__init_sirik_core();				// Initialize Core
	__si_init_logger("./logs/");		// Set Logs Path		
	
	if( argc == 1)
	{	
		sirik_lic__create_interface();
	}
	else if( argc == 2)
	{	
		int sts = __si_lic__load_license( argv[1]);
		
		if( sts < 0)
		{
			printf("problem loading file :%d\n", sts);
		}
		else
		{
			//int __si_ValidateMACAddress( char * macAddress)
			int licenseVal 	= __si_ValidateLicenseWithExpiryDate( 14);
			int deviceVal 	= __si_ValidateDeviceId();
			
			printf( "licenseVal=%d deviceVal=%d\n", licenseVal, deviceVal);
			
		}
	}
	
	return EXIT_SUCCESS;
}



