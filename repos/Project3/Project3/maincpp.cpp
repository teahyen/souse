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
		cout << "파일 오픈에 실패했습니다" << endl;
		return;
	}
	while (cin.get(ch));
	fout.put(ch);

	fout.close();
}