#include <vector>
#include <iostream>
using namespace std;   
void main() 
{
  vector <int> v0;
  vector <int> v1(3);  
  vector <int> v2(10, 2);  
	 
  cout<<"������ ũ��� : " << v0.size()<<endl;  
  cout<<"������ ũ��� : " << v1.size()<<endl;  
  cout<<"������ ũ��� : " << v2.size()<<endl;  

  for(int i=0; i<v1.size(); i++)
    cout<<"  "<<v1[i];     
  cout<<endl;
     
  for(int i=0; i<v2.size(); i++)
     cout<<"  "<<v2[i];     
   cout<<endl;
}