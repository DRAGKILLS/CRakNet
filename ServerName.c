#include "ServerName.h"

char setName(char Name) {
	_ServerName[40] = Name;
	return Name;
}

char getName() {
	return _ServerName;
}

char setMotd(char Motd) {
	_ServerMotd[40] = Motd;
	return Motd;
}

char getMotd() {
	return _ServerMotd;
}
