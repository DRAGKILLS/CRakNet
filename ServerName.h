#pragma once

typedef char things[50];

things _ServerName = "CRakNet";
things _ServerMotd = "World";


char getMotd();
char setMotd(char Motd);
char getName();
char setName(char Name);
