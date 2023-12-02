#include "aq_net/aq_socket/unix/aq_create_socket.h"
int AqNet::AqSocket::AqCreateSocket(int SocketAddressFamily,int SocketType){
    int SocketFileDescriptor = socket(SocketAddressFamily,SocketType,0);
    if(SocketFileDescriptor == -1){
        //AQ.Error.Net.Socket.Create_Create_Failed
        //aq.error.net.socket.create_create_failed
        //AQErrorNetSocketCreate_CreateFailed
        //AQ.ERROR.NET.SOCKET.CREATE_CREATE_FAILED
        return -1;
    }
    return SocketFileDescriptor;
}