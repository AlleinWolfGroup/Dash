#include <windows.h>

int APIENTRY WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR     lpCmdLine,
	int       nCmdShow)
{
	MessageBox(NULL, L"Простейшая программа!", L"Nataly", 0); //сообщение
	return 0;
}