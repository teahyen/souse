#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//void PrintElement(int n)
//{
//	cout << n << "		 ";
//}
//
//void main()
//{
//		 vector<int> v(8);
//		 for (int i = 0; i < v.size(); i++)
//			 v[i] = i + 1;
//
//		 cout << "*** 일반 for()문을 사용한 요서 접근 ***" << endl;
//		 for (int i = 0; i < v.size(); i++)
//			 cout << v[i] << "		";
//		 cout << endl;
//
//		 cout << "*** for_each() 함수를 사용한 요소 접근 ***" << endl;
//		 for_each(v.begin(),v.end(), PrintElement);
//		 cout << endl;
//}
void main()
{
	vector<int> v(8);

	for (int i = 0; i < v.size(); i++)
		v[i] = i + 1;

	vector<int>::iterator iter;

	iter = find(v.begin(), v.end(), 2);

	if (iter != v.begin(), v.end(), 2);

	if (iter != v.end())
		cout << *iter << "값을 찾았습니다." << endl;
	else
		cout << "찾는 값이 없습니다." << endl;

	iter = find(v.begin(), v.end(), 20);

	if (iter != v.end())
		cout << *iter << "를 찾았습니다." << endl;
	else
		cout << "찾는 값이 없습니다." << endl;
}