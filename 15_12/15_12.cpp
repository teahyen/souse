#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void PrintElement(int n) // ����� ���� ����ϴ� �Լ� ���� 
{
    cout  << n << "    ";
}

void main()
{
   vector<int>  v(8) ;  

   for (int i = 0; i < v.size(); i++)
        v[i] = i + 1 ;

   cout << "***�Ϲ� for()���� ����� ��� ���� ***" << endl ;  
   for( int i = 0 ; i <v.size(); i++)
        cout << v[i] << "    ";
   cout << endl;

   cout << "*** for_each() �Լ� ����� ��� ���� ***" << endl ;  
   for_each(v.begin(), v.end(), PrintElement) ;
   cout << endl ;
}