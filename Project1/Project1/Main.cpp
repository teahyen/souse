#include <iostream>
using namespace std;

int num(int a,int b)
{
	if (b ==a)
	{
		return 0;
	}
	else
	{
		if (a > b)
		{
			for (b; b < a; b++)
			{
				if (b % 2 != 0)
					cout << b;
				else
					return;
			}
		}
		else
		{
			for (a; a < b; b++)
			{
				if (a % 2 != 0)
					cout << a;
				return;
			}
		}
		
	}
}
int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << num(a,b);
}
//#include <iostream>
//using namespace std;
//
//int Cnum(char a[])
//{
//	int j = 0;
//	if (j <= 5&&j == NULL)
//		return 0;
//	else
//	{
//
//		for (int i = 0; i < j; i++)
//		{
//			if (a[j]>a[j+1])
//			{
//				a[j] = a[j + 1];
//			}
//			else
//			{
//				a[j + 1] = a[j];
//			}
//		}
//		return(a[j]-1);
//	}
//}
//int main()
//{
//	int j;
//	int a[5] = {0, };
//	cin >> j;
//
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> a[i];
//	}