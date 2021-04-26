#include <Windows.h>
#include <iostream>
#include <conio.h>

DWORD WINAPI Wasans(LPVOID lpParam);
DWORD WINAPI Wa(LPVOID lpParam);
DWORD WINAPI Wow(LPVOID lpParam);


// �����尡 ���ư� ���� ����
CRITICAL_SECTION crit;

int main()
{
    // �������غ�(�ʱ�ȭ)
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

    // �ڵ��� ����� �� ���� �������� ����ϴ� �Լ�(INFINITE����)
    WaitForSingleObject(hThread, INFINITE);
    WaitForSingleObject(iThread, INFINITE);
    WaitForSingleObject(jThread, INFINITE);

    // ������ Delete�ؾߵ�
    DeleteCriticalSection(&crit);
    return 0;
}

DWORD WINAPI Wasans(LPVOID lpParam)
{
    // main�Լ����� �ʰԽ���
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