all:
	gcc -g3 -o S1AP_Server S1AP_Server.c -L. libS1AP_18_3.so libsicore.so -I./ -lpthread -lsctp -DSCTP_SUPPORT -Wl,-rpath .
	gcc -g3 -o S1AP_Client S1AP_Client.c S1AP_test.c -L. libS1AP_18_3.so libsicore.so -I./ -lpthread -lsctp -DSCTP_SUPPORT -Wl,-rpath .
