#include <Windows.h>

__int32 g_dwSAMP_Addr = NULL;

void ThFunction()
{
	if ((g_dwSAMP_Addr=(__int32)LoadLibrary(TEXT("samp.dll"))))
	{
		/* 
			- bypass Debug commands:
				/vsel
				/vehicle
				/player_skin
				/set_weather
				/set_time
		*/
		DWORD* bypass_cmds = (DWORD*)(g_dwSAMP_Addr + 0x26DFE8);
		*bypass_cmds = 1;
	}
}

BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		{
			DisableThreadLibraryCalls(hModule);
			CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(ThFunction), nullptr, 0, nullptr);
		}
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
