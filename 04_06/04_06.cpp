#include<iostream> 
using namespace std; 
void fun( ); 
int a; // 외부변수 a 
void main( ) 
{ 
  int a = 20; // 지역변수 a 
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
