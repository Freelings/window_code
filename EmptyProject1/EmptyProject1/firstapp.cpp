//#include <windows.h>
//#include <tchar.h>
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, char* lpCmdLine, int nShowCmd)
//{
//	MessageBox(NULL, _T("This is first window"), _T("This is first title"), MB_YESNO | MB_ICONINFORMATION );
//	return 0;
//}

#include <stdio.h>
char fun(char* c)
{
    if (*c <= 'Z' && *c >= 'A') *c -= 'A' - 'a'; return *c;
}
main()
{
    char s[81], * p = s;
    gets(s);
    while (*p)
    {
        *p = fun(p);
        putchar(*p);
        p++;
    }
    printf("\n");
}