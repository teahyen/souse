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
//		 cout << "*** �Ϲ� for()���� ����� �伭 ���� ***" << endl;
//		 for (int i = 0; i < v.size(); i++)
//			 cout << v[i] << "		";
//		 cout << endl;
//
//		 cout << "*** for_each() �Լ��� ����� ��� ���� ***" << endl;
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
		cout << *iter << "���� ã�ҽ��ϴ�." << endl;
	else
		cout << "ã�� ���� �����ϴ�." << endl;

	iter = find(v.begin(), v.end(), 20);

	if (iter != v.end())
		cout << *iter << "�� ã�ҽ��ϴ�." << endl;
	else
		cout << "ã�� ���� �����ϴ�." << endl;
}