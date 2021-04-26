#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//사용자 정의 예외 클래스(userError)정의
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
//	cout << "사용자 정의 예외" << endl;
//}
//
//void main()
//{
//	try 
//	{
//		throw UserError();
//	}catch(UserError &ex)
//	{
//		cout << "사용자 정의 예외 발생에 대한 처리" << endl;
//		ex.func();
//	}
//}


//void func(int a)throw(char* , int)
//{
//	if (a == 0)
//		throw "변수의 값이 0 이다";
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