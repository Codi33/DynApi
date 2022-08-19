#include <Windows.h>

#define API(DLL, FUNC) f##FUNC = (decltype(f##FUNC))GetApi(DLL, #FUNC)

VOID(*fSleep)(DWORD);
int(*fMessageBoxA)(HWND, LPCSTR, LPCSTR, UINT);

LPVOID GetApi(const char* dll, const char* fn)
{
    HMODULE mod = LoadLibraryA(dll);
    return GetProcAddress(mod, fn);
}

void initApi()
{
    API("kernel32.dll", Sleep);
    API("user32.dll", MessageBoxA);
}