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
  
   iter = find(v.begin(), v.end(), 2);

   if( iter != v.end() )
       cout << *iter <<"를 찾았습니다." << endl;
   else
       cout << "찾는 값이 없습니다." << endl;

   iter = find(v.begin(), v.end(), 20);

   if( iter != v.end() )
       cout << *iter <<"를 찾았습니다." << endl;
   else
       cout << "찾는 값이 없습니다." << endl;
}