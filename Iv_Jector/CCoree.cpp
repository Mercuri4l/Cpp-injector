#include "CCoree.h"

bool CCoree::b_inject(DWORD id, const char* path)
{


	HANDLE tarProcess = OpenProcess(PROCESS_ALL_ACCESS, false, id);

	if (tarProcess) {

		LPVOID loadLibA = (LPVOID)GetProcAddress(GetModuleHandleA("kernel32.dll"), "LoadLibraryA");

		LPVOID loadPath = VirtualAllocEx(tarProcess,
			0,
			strlen(path) + 1,
			MEM_COMMIT | MEM_RESERVE,
			PAGE_READWRITE);

		if(!loadPath)
			System::Console::WriteLine("Load Path -> {0}", GetLastError());

		if (!WriteProcessMemory(tarProcess,
			loadPath,
			(LPVOID)path,
			strlen(path) + 1,
			0)) {
			System::Console::WriteLine("WPM -> {0}", GetLastError());

		}

		HANDLE remThread = CreateRemoteThread(tarProcess,
			0,
			NULL,
			(LPTHREAD_START_ROUTINE)loadLibA,
			loadPath,
			NULL,
			NULL);

		if (!remThread)
			System::Console::WriteLine("CRT -> {0}", GetLastError());



		WaitForSingleObject(remThread, INFINITE);

		CloseHandle(remThread);

		VirtualFreeEx(tarProcess,
			loadPath,
			strlen(path) + 1,
			MEM_RELEASE);

		CloseHandle(tarProcess);

		return true;
	}


	return false;
}