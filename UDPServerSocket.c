#include "UDPServerSocket.h"


int UDPServerSocket(const *char Address, int namelen) {
	bind(getSocket(), Address, namelen);
}

getSocket() {
	return socket(AF_INET, SOCK_DGRAM, 0);
}

sendBuffer(char buffer, int len, int flags) {
	send(getSocket(), buffer, len, flags);
}

close() {
	closesocket(getSocket());
	return 0;
}
