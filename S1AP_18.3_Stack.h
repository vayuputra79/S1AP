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


#ifndef SI_W1AP_18_5__H
#define SI_W1AP_18_5__H

#include "sirik_socket.h"
#include "S1AP_18.3.h"
#include "S1AP_18.3_Facade.h"

typedef int (*S1AP__FPointer_OnConnect)( SI_Socket * siSocket);

void S1AP__InitStack( char * logsPath);
void S1AP__SetHost( char * ipv4_1, char * ipv4_2, int port);
void S1AP__SetOnMessageRecv( fp_s1ap_on_message handler );
void S1AP__SetOnConnect( S1AP__FPointer_OnConnect fp);
void S1AP__AddServer( char * ipv4_1, char * ipv4_2, int port);
void S1AP__StartStack();


#endif




