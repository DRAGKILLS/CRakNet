#pragma once

#include <Windows.h>
#include <stdlib.h>

int getSocket();
int sendBuffer(char buffer, int len, int flags);
int close();