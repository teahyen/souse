#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool Greater5(int n)
{
    return n > 5;
}

void main()
{
   vector<int>  v(8) ;  
  
   for (int i = 0; i < v.size(); i++)
       v[i] = i + 1 ;

   vector<int>::iterator iter;

   iter = find_if(v.begin(), v.end(), Greater5);

   if( iter != v.end() )
       cout << " 5보다 큰 첫번째 값을 찾았습니다 : " << *iter << endl;
   else
       cout << " 찾는 값이 없습니다." << endl;
}