#include <iostream>
#include <Windows.h>
#include <string>
#include <thread>

void cleanup(HWND hWnd) 
{
	std::cout << "Closing\n";
	//system("taskkill /F /IM DesignToolsServer.exe /T >nul 2>&1");
}


int main() 
{
while (true) 
{
	HWND hWnd = FindWindowA(NULL, "License Activation Required");

		if (hWnd)
		{
			ShowWindow(hWnd, SW_HIDE);
			std::cout << "Removed Siticone Window\n"; 
			
		}
		else if (!hWnd) {
			std::cout << "Siticone window not found.\n";
		}
	
	//So cpu dosent boom
	std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
}

