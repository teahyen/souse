#include <iostream> 
using namespace std;
void main( ) 
{ 
  int a[5] = {10,20,30,40,50}; 
  int* p; 
  p = a; 
  
  cout << "\n     *p :" << *p; 
  cout << "\t   a[0] :" << a[0]; 
  
  cout << "\n *(p+1) :" << *(p+1); 
  cout << "\t   a[1] :" << a[1]; 
  
  cout << "\n *(p+2) :" << *(p+2); 
  cout << "\t   a[2] :" << a[2] << "\n"; 
} 
