#include "ServerName.h"

char setName(char Name) {
	_ServerName[50] = Name;
	return Name;
}

char getName() {
	return _ServerName;
}

char setMotd(char Motd) {
	_ServerMotd[50] = Motd;
	return Motd;
}

char getMotd() {
	return _ServerMotd;
}