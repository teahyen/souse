#include<iostream> 
using namespace std; 
void fun( ); 
int a; // �ܺκ��� a 
void main( ) 
{ 
  int a = 20; // �������� a 
  cout<<"\nmain a => "<<a; 
  fun( ); 
  cout<<"\nmain a => "<<a<<"\n"; 
} 
void fun( ) 
{ 
  cout<<"\nfun a => "<<a; 
  a=a+100; 
  cout<<"\nfun a => "<<a; 
} 
