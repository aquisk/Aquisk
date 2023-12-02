#ifndef aq_net_socket_unix_create_socket
#define aq_net_socket_unix_create_socket
#include <sys/socket.h>
#include "aq_debug/aq_debug.h"
namespace AqNet::AqSocket{
    extern int AqCreateSocket(int SocketAddressFamily,int SocketType);
}
#endif