//10209김태현
#include <iostream>
using namespace std;

int Factorial(int n) 
{
	if (n == 0)
		return 1;
	else if(!n%2==0)
		return((1+Factorial(n))*n%2);
}
int main()
{
	int n;
	cin >> n;
	cout << "1부터" << n << "까지의 합은" << Factorial(n) << "입니다."<<endl;
}