#include  <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	wcout.imbue(locale("kor")); //�ѱ��� ���� �ִ� �ڵ�
	wcin.imbue(locale("kor"));
	wchar_t p[20] = L"��";
	wchar_t n[50] = L"00�� �����"; //�ϰ� ���� �� �� ������ �˴ϴ�.
	char s = '   ';

	{//��Ʈ��� ����
		for (int i = 0; i < 2; i++)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			wcout << s;
		}
		for (int i = 0; i < 2; i++)
		{
			wcout << p;
		}
		for (int i = 0; i < 2; i++)
		{
			wcout << s;
		}
		for (int i = 0; i < 2; i++)
		{
			wcout << p;
		}
		cout << endl;
		Sleep(1000);
		for (int i = 0; i < 7; i++)
		{
			wcout << p;
		}
		cout << endl;
		Sleep(1000);
		for (int i = 0; i < 7; i++)
		{
			wcout << p;
		}
		cout << endl;
		Sleep(1000);
		for (int i = 0; i < 4; i++)
		{
			wcout << s;
		}
		for (int i = 0; i < 3; i++)
		{
			wcout << p;
		}
		cout << endl;
		Sleep(1000);
		for (int i = 0; i < 6; i++)
		{
			wcout << s;
		}
		wcout << p << endl;
		cout << endl;
		Sleep(1000);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		wcout << n << endl;
	}
	return;
}