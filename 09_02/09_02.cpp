#include <iostream> 
using namespace std; 
#define SQUARE1(x) x*x 
void main(void) 
{ 
  int a=5, res; 
  res = SQUARE1(a+2); 
  cout << " SQUARE1(a+2) => " << res << "\n";   // 17 
  
  res = 100/SQUARE1(a); 
  cout << " 100/SQUARE1(a) => " << res << "\n"; // 100 
} 