#include <iostream>
#include <fstream>
using namespace std;

typedef struct  insa
{
	char name[20];
	int age;
	char address[20];
}insa;

int main()
{
	insa man = { "±èÅÂÇö",17,"¾È»ê" };

	ofstream fout;

	fout.open("insa.dat");
	fout << man.name << " " << man.age << " " << man.address << endl;

	fout.close();
	return (0);
}