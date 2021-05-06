#include <iostream> 
using namespace std; 
void main( ) 
{ 
  int a[5] = {10, 20, 30, 40, 50}; 
  int i; 
 
  cout << "원소의 값을 출력 \n"; 
  for(i=0; i<5; i++) 
    cout << a[i] << "\t" ; 
  cout << "\n"; 
  
  cout << "원소의 주소 값을 출력 \n"; 
  for(i=0; i<5; i++) 
    cout << &a[i] << "\t" ; 
  cout << "\n"; 
} 
