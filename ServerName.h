#pragma once

typedef char things[100];

things ServerName = "CRakNet";
things ServerMotd = "World";

char getMotd();
char setMotd(char Motd);
char getName();
char setName(char Name);
