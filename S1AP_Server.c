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

#include "S1AP_18.3_Stack.h"

void S1AP_ReceiveMessage( uint8_t procedureCode, uint8_t messageType, void * msg, SI_S1APNode * ngNode)
{
	printf("received message procedureCode=%d Type=%d\n", procedureCode, messageType);
}


int main( int argc, char* argv[])
{
	printf( "S1AP Server\n");
	S1AP__InitStack( "./s1ap_s_logs/");
	S1AP__SetHost( "192.160.1.3", NULL, 36412);
	S1AP__SetOnMessageRecv( S1AP_ReceiveMessage);
	S1AP__StartStack();

	// cat /proc/net/sctp/eps 
	// lsof -R | grep 
		
	__si_core_wait();
}

