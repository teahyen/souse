#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

void PrintV
//void main()
//{
//	vector<int> v(8);
//
//	for (int i = 0; i < v.size(); i++)
//		v[i] = i + 1;
//
//	vector<int>::iterator iter;
//	vector<int>::const_iterator citer;
//
//	*iter = 100;
//	citer = v.begin();
//	*citer = 100;
//}
//void main()
//{
//	vector<int> v(8);
//
//	for (int i = 0; i < v.size(); i++)
//		v[i] = i + 1;
//
//	vector<int>::iterator iter;
//	vector<int>::const_iterator citer;
//
//	cout << "***백터 v내용 츨력(비상수 반복자)***" << endl;
//	for (iter = v.begin(); iter!= v.end(); iter++)
//		cout << *iter << "";
//
//	cout << "***백터v내용 출력(비상수 반복자)***" << endl;
//	for (citer = v.begin(); citer!= v.end(); citer++)
//		cout << *citer << "";
//}
//void main() 
//{
//	vector<int> v(8);
//	vector<int>::iterator start, end, iter;
//	for (int i = 0; i < v.size(); i++)
//	v[i] = i + 1;
//
//		start = v.begin();
//		end = v.end();
//
//		sort(start, end);
//		cout<<"***백터 V내용 출력 (오름 차순 정렬)***"<<endl;
//		for (iter = v.begin(); iter!= v.end(); iter++)
//			cout << " " << *iter++;
//		cout << "\n";
//
//		sort(start, end, greater<int>());
//
//		cout << "***백터V내용 출력(내림차순 정렬***" << endl;
//		cout << "" << *iter;
//		cout << "\n";
//}