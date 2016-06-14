#include <Windows.h>

extern "C" __declspec(dllexport)
unsigned int injectedCode()
{
	__asm nop;
	return 0;
}

extern "C" BOOL APIENTRY
DllMain (HINSTANCE hInstance, DWORD dwReason, LPVOID _Reserved)
{
	switch (dwReason) 
	{
		case DLL_PROCESS_ATTACH:
			break;
		case DLL_PROCESS_DETACH:
			break;
	}

	return TRUE;
}