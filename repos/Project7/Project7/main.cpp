#include <iostream>
using namespace std;
template <typename T>
T myabs(T num) 
{
	if (num < 0)
		num = -num;
	return num;
}
void main()
{
	int a = -10;
	cout << a << "�� ������ ->" << myabs(a) << endl;
	double b = -3.4;
	cout << b << "�� ������ ->" << myabs(b) << endl;
	long int c= -20L;
	cout << c << "�� ������ ->" << myabs(c) << endl;
}