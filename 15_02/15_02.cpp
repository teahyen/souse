#include <vector>
#include <iostream>
using namespace std;   
void main()
{   
   vector <int>::iterator  iter;
   vector <int> v;
  
   v.push_back( 10 );
   v.push_back( 20 );
   v.push_back( 30 );
   v.push_back( 40 );

   iter = v.begin();
   
   cout << "ù ��° ��Ҹ� ������ : "<< *iter << endl;
  
   *iter = 20;
   
   cout << "ù ��° ����� ���� ����Ǿ��� : "<< v[0] << endl;
   cout << "ù ��° ����� ���� ����Ǿ��� : "<< *iter << endl;
   
   *iter++;  
   cout << "ù ��° ����� ���� ��Ҹ� ������ : "<< *iter << endl;

   cout<< "\n**** �ݺ��ڸ� �̿��Ͽ� ������ ��� ��� ****" << endl;
   for(iter=v.begin(); iter != v.end(); iter++)
     cout<<"   "<< *iter;
   cout<<"\n";
}