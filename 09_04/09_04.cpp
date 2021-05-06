#include <iostream> 
using namespace std; 
#define add1(a, b) a+b 
inline int add2(int a, int b) 
{ 
  return a+b; 
} 
int add3(int a, int b) 
{ 
  return a+b; 
} 
void main( ) 
{
 int result; 
  result = 2*add1(10, 20); 
  cout<<"macro 함수 => "<<result<<"\n"; 
  result = 2*add2(10, 20); 
  cout<<"inline 함수 => "<<result<<"\n"; 
  result = 2*add3(10, 20); 
  cout<<"일반 함수 => "<<result<<"\n"; 
}