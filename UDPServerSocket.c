#include "UDPServerSocket.h"

set_nonblocking_socket(int fd, int nonblocking)
{
	if (fd < 0)
	{
		return 0;
	}
#ifdef _WIN32
	unsigned long mode = nonblocking;
	return (ioctlsocket(fd, FIONBIO, &mode) == 0);
#else
	int flags = fcntl(fd, F_GETFL, 0);
	if (flags == -1)
	{
		return 0;
	}
	flags = nonblocking == 0 ? (flags & ~O_NONBLOCK) : (flags | O_NONBLOCK);
	return (fcntl(fd, F_SETFL, flags) == 0);
#endif
}

create_socket(char *Address, int Port) {
#ifdef _WIN32
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
		{
			printf("error code %d\n", WSAGetLastError());
			exit(EXIT_FAILURE);
		}
	}
#endif
	set_nonblocking_socket(getSocket(), 1);
	struct sockaddr_in s_address;
	memset(&s_address, 0, sizeof(s_address));
	s_address.sin_family = AF_INET;
	s_address.sin_addr.s_addr = inet_addr(Address);
	s_address.sin_port = htons(Port);
	if (bind(getSocket(), (struct sockaddr*)&s_address, sizeof(Address)) < 0) {
		printf("Cant bind port\n");
		exit(EXIT_FAILURE);
	}
}

getSocket() {
	return socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
}

sendBuffer(char buffer, int len, int flags) {
	send(getSocket(), buffer, len, flags);
}

close() {
	closesocket(getSocket());
	return 0;
}
