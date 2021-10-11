#include <iostream>
#include <Windows.h>
#include <stdlib.h>

int PROTOCOL = 10;
byte FLAG_NEED_ACK = 0x08;
int PRIORITY_NORMAL = 0;
int PRIORITY_IMMEDIATE = 1;
char MAGIC[] = "\x00\xff\xff\x00\xfe\xfe\xfe\xfe\xfd\xfd\xfd\xfd\x12\x34\x56\x78";

int main()
{
    std::cout << "Starting Host in " << AF_INET << ":19132!" << std::endl;

    return 0;
}