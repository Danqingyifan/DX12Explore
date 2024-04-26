#include<windows.h>

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE , LPSTR lpCmdline, INT nCmdShow)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);
	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;

	return 0;
}