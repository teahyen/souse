#include <iostream> 
using namespace std; 
void sub( ); 
void main( ) 
{ 
  for(int i=1; i<=5; i++){ 
    cout<< i << "========>\n"; 
    sub( ); 
  } 
} 
void sub( ) 
{ 
  auto a = 0; 
  static int b = 0; 
  a+=100; 
  b+=100; 
  cout<<" auto a = "<<a<<endl; 
  cout<<" static b = "<<b<<endl; 
}