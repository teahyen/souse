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

   cout << "***���� v ���� ���(��� �ݺ���)***" << endl ;
   for(iter = v.begin(); iter != v.end(); iter++)
     cout << *iter <<"    ";
   cout << endl;
	
   cout << "***���� v ���� ���(�� ��� �ݺ���)***" << endl ;
   for(citer = v.begin(); citer != v.end(); citer++)
     cout << *citer <<"    ";
   cout << endl;
}