#include <iostream> 
using namespace std; 
#define SIZE 10       

void main()
{
  int i, j;
  i = SIZE;

#ifdef SIZE
  #undef SIZE           
  #define SIZE 20       
#endif
  
  j = SIZE;

 cout<<" i = "<< i <<", j = "<< j <<"\n";
}                                                   