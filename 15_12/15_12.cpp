#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void PrintElement(int n) // 요소의 값을 출력하는 함수 정의 
{
    cout  << n << "    ";
}

void main()
{
   vector<int>  v(8) ;  

   for (int i = 0; i < v.size(); i++)
        v[i] = i + 1 ;

   cout << "***일반 for()문을 사용한 요소 접근 ***" << endl ;  
   for( int i = 0 ; i <v.size(); i++)
        cout << v[i] << "    ";
   cout << endl;

   cout << "*** for_each() 함수 사용한 요소 접근 ***" << endl ;  
   for_each(v.begin(), v.end(), PrintElement) ;
   cout << endl ;
}