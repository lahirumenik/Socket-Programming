//
// Created by lahiru on 05/02/24.
//
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
    //AF_INET -> IPV4, SOCK_STREAM -> TCP , 0-> layer beneath the socket is network layer
    int socketFD =  socket(AF_INET, SOCK_STREAM, 0);

    char* ip = "10.40.19.245";
    struct sockaddr_in address;
    address.sin_family = AF_INET;
    


}