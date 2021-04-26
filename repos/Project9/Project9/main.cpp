#include <iostream>
using namespace std;

class MyClass
{
public:
	MyClass(int r=0,int i=0);
	void SetComplex();
	void ShowComplex();
private:
	int real;
	int image;
};

MyClass::MyClass(int r = 0, int i = 0) : real(r), image(i)
{
}

void MyClass::SetComplex()
{
	real = 2;
	image = 5;
}

void MyClass::ShowComplex()
{
	cout << "{" << real << "+" << image << "i)" << endl;
}
int main() 
{
	MyClass x, y;

	x.SetComplex();
	x.ShowComplex();
	y.SetComplex();
	y.ShowComplex();
}