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


#ifndef SIRIK_LICENSE_H
#define SIRIK_LICENSE_H

#define SIRIK__PRODUCT_ID__M3UA				14
#define SIRIK__PRODUCT_ID__SMPP				28


typedef struct __si_license
{
	int algId;
	char alg[10];
	uint32_t productId;
	char mac[7];
	uint32_t serialNo;
	char company_short_name[21];
	struct tm expiry_date;
	char company_address[21];
	struct tm created_date;
	struct tm start_date;
	char cpuid[20];						//device-id
	int validateCpuId;					//
	uint32_t TPS;
	char InstanceId[100];
	char issuing_auth[21];
	char issuing_auth_address[21];
} SI_License;





#endif





















