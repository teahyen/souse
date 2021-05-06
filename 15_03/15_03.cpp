#include <vector>
#include <algorithm>
#include <functional>      // For greater<int>()
#include <iostream>
using namespace std;

void main()
{
   vector<int>  v(8);   
 
   vector<int>::iterator start, end, iter;
   
   for (int i= 0; i < v.size(); i++)
        v[i] = i + 1 ;

   start = v.begin();   
   end = v.end();   
 
   sort(start, end);
   
   cout << "***���� v ���� ���(�������� ����)***" << endl ;
   for(iter=v.begin(); iter!=v.end(); iter++)
     cout<<"   "<< *iter;
   cout<<"\n";

   sort(start, end, greater<int>() );

   cout << "***���� v ���� ���(�������� ����)***" << endl ;
   for(iter=v.begin(); iter!=v.end(); iter++)
     cout<<"   "<< *iter;
   cout<<"\n";
}