#include <windows.h>
#include <tchar.h>
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, char* lpCmdLine, int nShowCmd)
{
	MessageBox(NULL, _T("This is first window"), _T("This is first title"), MB_YESNO | MB_ICONINFORMATION );
	return 0;
}