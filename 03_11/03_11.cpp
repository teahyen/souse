#include <iostream> 
using namespace std; 
void main() 
{ 
  int total=0; 
  int i=1;        // for 문의 초기식 
  while(i<=10) {  // for 문의 조건식 
    total+=i; 
    i++;         // for 문의 증감식에 해당 
  } 
  cout<<"1-10까지의 합은 "<<total<<"\n"; 
} 