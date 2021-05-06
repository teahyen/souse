#include <iostream> 
using namespace std; 
#define SQUARE2(x) ((x)*(x)) 
void main(void) 
{ 
  int a=5, res; 
  res = SQUARE2(a+2); 
  cout << " SQUARE2(a+2) => " << res << "\n"; 
  
  res = 100/SQUARE2(a); 
  cout << " 100/SQUARE2(a) => " << res << "\n"; 
}