#include <Windows.h>
#include <iostream>

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

INT WINAPI wWinMain(HINSTANCE _In_ hInstance, HINSTANCE _In_opt_ hPrevInstance, PWSTR _In_ cmdArgs, INT _In_ cmdShow)
{
    MessageBox(NULL, L"Hello World!", L"Windows Application", MB_OK | MB_ICONINFORMATION);
    // TODO: Implement application
    return 0;
}
