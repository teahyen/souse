//20308 ±èÅÂÇö
#include <iostream>
using namespace std;
int main()
{
	char arr[3][3];

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 2; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	/*

	int a[3][3] = { 0, };
	int i, j;
	for (int i = 0; i < 3; i++)
	{
		a[i][0] = 1;
	}
	for (int i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if(j>0&& i > 0)
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

			}
			if (a[i][j] > 0)
				cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
}