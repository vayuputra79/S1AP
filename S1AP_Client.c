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
#include <poll.h>
#include <sys/epoll.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <error.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <net/if.h> 
#include <resolv.h>

#include "sirik_socket.h"
#include "S1AP_18.3.h"
#include "S1AP_18.3_Stack.h"
#include "S1AP_test.h"


int s1ap_server_onconnect( SI_Socket * siSocket)
{
	printf("Connected\n");

	SI_S1APNode * f1Node = (SI_S1APNode *) siSocket->transportEng;

	if(!f1Node)
	{
		__si_malloc2( sizeof( SI_S1APNode), (uint8_t **)&f1Node);
		siSocket->transportEng 	= (uint8_t *) f1Node;
		f1Node->transportEng 	= (uint8_t *) siSocket;
	}
	f1Node->siSocket = siSocket;
	

	
	__si_s1ap__Send_S1SetupRequest_Prototype( f1Node);
	return 0;
}	


void S1AP_ReceiveMessage( uint8_t procedureCode, uint8_t messageType, void * msg, SI_S1APNode * ngNode)
{
	printf("Received Message With procedureCode=%u\n", procedureCode);
}


int main( int argc, char* argv[])
{
	printf( "S1AP Server\n");
	S1AP__InitStack( "./e1ap_c_logs/");
	S1AP__SetHost( "192.160.1.4", NULL, 0);
	S1AP__AddServer( "192.160.1.3", NULL, 36412);
	S1AP__SetOnConnect( s1ap_server_onconnect);
	S1AP__SetOnMessageRecv( S1AP_ReceiveMessage);
	S1AP__StartStack();

	// cat /proc/net/sctp/eps 
	// lsof -R | grep 
		
	__si_core_wait();
}

