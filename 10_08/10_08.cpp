#include <iostream> 
using namespace std; 
int myabs(int num) 
{ 
  if(num<0) 
    num=-num; 
  return num; 
} 
 
double myabs(double num) 
{ 
  if(num<0) 
    num=-num; 
  return num; 
} 

long int myabs(long int num) 
{ 
  if(num<0) 
  num=-num; 
  return num; 
} 
 
void main() 
{ 
  int a=-10; 
  cout << a <<"ÀÇ Àı´ñ°ªÀº-> "<< myabs(a) << endl; 
  
  double b=-3.4; 
  cout << b <<"ÀÇ Àı´ñ°ªÀº-> "<< myabs(b) << endl; 
 
  long int c=-20L; 
  cout << c <<"ÀÇ Àı´ñ°ªÀº-> "<< myabs(c) << endl; 
} 