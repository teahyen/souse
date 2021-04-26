#include <Windows.h>
#include <iostream>
#include <conio.h>

DWORD WINAPI Wasans(LPVOID lpParam);
DWORD WINAPI Wa(LPVOID lpParam);
DWORD WINAPI Wow(LPVOID lpParam);


// 쓰레드가 돌아가 영역 지정
CRITICAL_SECTION crit;

int main()
{
    // 쓰레드준비(초기화)
    InitializeCriticalSection(&crit);

    HANDLE hThread;
    HANDLE iThread;
    HANDLE jThread;

    hThread = CreateThread(NULL, 0, Wasans, 0, 0, NULL);
    iThread = CreateThread(NULL, 0, Wa, 0, 0, NULL);
    jThread = CreateThread(NULL, 0, Wow, 0, 0, NULL);

    for (int i = 1; i <= 1000; ++i)
    {
        Sleep(10);
        EnterCriticalSection(&crit);
        printf("'");
        LeaveCriticalSection(&crit);
    }

    // 핸들이 종료될 때 까지 무한으로 대기하는 함수(INFINITE무한)
    WaitForSingleObject(hThread, INFINITE);
    WaitForSingleObject(iThread, INFINITE);
    WaitForSingleObject(jThread, INFINITE);

    // 무조건 Delete해야됨
    DeleteCriticalSection(&crit);
    return 0;
}

DWORD WINAPI Wasans(LPVOID lpParam)
{
    // main함수보다 늦게시작
    Sleep(5);

    for (int i = 1; i <= 1000; ++i)
    {
        Sleep(10);
        EnterCriticalSection(&crit);
        printf("^");
        LeaveCriticalSection(&crit);
    }
    return 0;
}
DWORD WINAPI Wa(LPVOID lpParam)
{
    Sleep(10);

    for (int i = 1; i <= 1000; ++i)
    {
        Sleep(10);
        EnterCriticalSection(&crit);
        printf("*");
        LeaveCriticalSection(&crit);
    }
    return 0;
}
DWORD WINAPI Wow(LPVOID lpParam)
{
    Sleep(10);

    for (int i = 1; i <= 1000; ++i)
    {
        Sleep(10);
        EnterCriticalSection(&crit);
        printf("#");
        LeaveCriticalSection(&crit);
    }
    return 0;
}