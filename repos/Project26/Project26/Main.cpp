//20308������
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
	
	cout << "1���� " << n << " ������ ���� " << gaus(n) -a << "�Դϴ�." << endl;
	
}