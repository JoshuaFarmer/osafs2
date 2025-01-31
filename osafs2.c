extern int printf(const char * msg, ...);
#include "osafs2.h"

int main()
{
        InitRamFS();
        CreateF("test.txt");
        CreateF("test2.txt");
        ListF();
}
