#include "Api.h"

int main(int argc, char** argv)
{
    initApi();
    fMessageBoxA(NULL, "WORKS", "OK", MB_OK);
    fSleep(3000);
    return 0;
}