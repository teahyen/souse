#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//����� ���� ���� Ŭ����(userError)����
void main() 
{
	vector<int> v(8);
	for (int i = 0; i < v.size(); i++)
		v[i] = i + 1;
}
//class UserError
//{
//public:
//	void func();
//};
//void UserError::func()
//{
//	cout << "����� ���� ����" << endl;
//}
//
//void main()
//{
//	try 
//	{
//		throw UserError();
//	}catch(UserError &ex)
//	{
//		cout << "����� ���� ���� �߻��� ���� ó��" << endl;
//		ex.func();
//	}
//}


//void func(int a)throw(char* , int)
//{
//	if (a == 0)
//		throw "������ ���� 0 �̴�";
//	else
//	{
//		throw a;
//	}
//}
//void main()
//{
//	try
//	{
//		func(10);
//	}
//	catch (char* str)
//	{
//
//	}
//}