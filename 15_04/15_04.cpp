#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
   vector<int>  v(8) ;   

   for (int i = 0; i < v.size(); i++)
     v[i] = i + 1 ;

   vector<int>::iterator iter;
   vector<int>::const_iterator citer;

   cout << "***벡터 v 내용 출력(상수 반복자)***" << endl ;
   for(iter = v.begin(); iter != v.end(); iter++)
     cout << *iter <<"    ";
   cout << endl;
	
   cout << "***벡터 v 내용 출력(비 상수 반복자)***" << endl ;
   for(citer = v.begin(); citer != v.end(); citer++)
     cout << *citer <<"    ";
   cout << endl;
}