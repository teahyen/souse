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
		("성윤정",30,"서울","\n\r"),
		("전해영",24,"부산","\n\r"),
		("이은정",34,"대구","\n\r"),
		("오경주",34,"서울","\n\r"),
		("재제원",25,"마산","\n\r")
	};
	ofstream fout;
	fout.open("insa.dat");

	if (fout.fail()) 
	{
		cout << "출력 할 수 없습니다." << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		fout << man[i].name << " " << man[i].age << " " << man[i].address << endl;
	}
}