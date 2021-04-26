//20308김태현
#include <iostream>
using namespace std;

int gaus(int n) 
{
	if (n == 0)
		return 0;
	else
	{
		for (int i = n; i > 0; i--)
		{
			n +=  i;
		}
		return(n);
	}
}

int main() 
{
	int n;
	int a;
	cin >> a;
	n = a;
	
	cout << "1부터 " << n << " 까지의 합은 " << gaus(n) -a << "입니다." << endl;
	
}