#include "ServerName.h"

char setName(char Name) {
    ServerName[99] = Name;
    return Name;
}

char getName() {
    return reinterpret_cast<char>(ServerName[99]);
}

char setMotd(char Motd) {
    ServerMotd[99] = Motd;
    return Motd;
}

char getMotd() {
    return reinterpret_cast<char>(ServerMotd[99]);
}
