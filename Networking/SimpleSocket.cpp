#include "SimpleSocket.hpp"

hde
::SimpleSocket
::SimpleSocket(int domain, int service, int protocol, int port, u_long inteface) {

	address.sin_family = domain;
	address.sin_port = htons(port);
	address.sin_addr.s_addr = htonl(interface);
	connection = socket(domain,service,protocol);

}
