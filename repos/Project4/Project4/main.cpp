#include <iostream>
#include <fstream>
using namespace std;

struct insa
{
	char name{ 20 };
	int age;
	char address{ 20 };
	char Line[3];
};

void main()
{
	insa man[5] = 
	{
		("������",30,"����","\n\r"),
		("���ؿ�",24,"�λ�","\n\r"),
		("������",34,"�뱸","\n\r"),
		("������",34,"����","\n\r"),
		("������",25,"����","\n\r")
	};
	ofstream fout;
	fout.open("insa.dat");

	if (fout.fail()) 
	{
		cout << "��� �� �� �����ϴ�." << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		fout << man[i].name << " " << man[i].age << " " << man[i].address << endl;
	}
}