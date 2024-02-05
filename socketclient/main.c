//
// Created by lahiru on 05/02/24.
//
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main(){
    //AF_INET -> IPV4, SOCK_STREAM -> TCP , 0-> layer beneath the socket is network layer
    int socketFD =  socket(AF_INET, SOCK_STREAM, 0);

    char* ip = "142.250.188.46";
    struct sockaddr_in address;
    address.sin_family = AF_INET;
    address.sin_port = htons(80); //because network protocol is big endian
    inet_pton(AF_INET, ip,&address.sin_addr.s_addr); //convert it in to bytes as=nd assigned to addrees

    int result = connect(socketFD, &address, sizeof address);

    if (result==0){
        printf("successs");
    } else{
        printf("unsuccessful");
    }


    return 0;



}