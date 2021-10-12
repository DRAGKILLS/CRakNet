#include <iostream>
#include <Windows.h>
#include <stdlib.h>

char VERSION[] = "1.0";
static int PROTOCOL = 10;
static byte FLAG_NEED_ACK = 0x08;
static int PRIORITY_NORMAL = 0;
static int PRIORITY_IMMEDIATE = 1;
static char MAGIC[] = "\x00\xff\xff\x00\xfe\xfe\xfe\xfe\xfd\xfd\xfd\xfd\x12\x34\x56\x78";

using namespace std;

int main()
{
    cout << "Starting Host in " << AF_INET << ":19132!" << endl;

    return 0;
}
