//20308김태현
#include <iostream>
using namespace std;




int pibo(int a)
{
	if (a == 1 || a == 2)
		return 1;
	else
		return pibo(a - 1) + pibo(a - 2);
}

int main()
{
	int i;
	int n;
	cin >> n;
	for (i = 1; i < n; i++)
	{
		cout << pibo(i) << endl;
	}
}
//int hanoi(int num, char from, char by, char to)
//{
//	if (num == 1)
//		cout << "원반 1을" << from << "에서" << to << "로 이동" << endl;
//	else
//	{
//		//3단계중 1단계
//		hanoi(num - 1, from, to, by);
//		cout << "원반" << num << "을(를)" << from << "에서" << to << "로 이동" << endl;
//		hanoi(num - 1, by, from, to);
//	}
//	return 0;
//}
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//	return 0;
//}

