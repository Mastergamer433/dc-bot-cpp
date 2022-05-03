#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <iostream>
#include <string>
#include <sys/socket.h>
#include <netinet/in.h>

namespace hde {
class SimpleSocket {
public:
    SimpleSocket(int domain, int service, int protocol, int port, u_long interface);
private:
		struct sockaddr_in address;
		int connection;
};
}

#endif
