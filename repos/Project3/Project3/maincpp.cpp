#include <iostream>
#include <fstream>
using namespace std;

void main() 
{
	char ch;
	ofstream fout;

	fout.open("test.dat");
	if (fout.fill())
	{
		cout << "���� ���¿� �����߽��ϴ�" << endl;
		return;
	}
	while (cin.get(ch));
	fout.put(ch);

	fout.close();
}