#pragma once

#include <Windows.h>
#include <string>
#include <cstdio>
#include <string>



#pragma comment (lib, "User32.lib")
#pragma comment (lib, "Advapi32.lib")  

class CCoree
{
public:
	bool b_inject(DWORD id, const char* path);
};

