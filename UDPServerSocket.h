#pragma once

#include <Windows.h>
#include <stdlib.h>

int set_nonblocking_socket(int fd, int nonblocking);
int create_socket(char* Address, int Port);
int getSocket();
int sendBuffer(char buffer, int length, int flags);
int close();
