#include <iostream> 
using namespace std; 
#define ROW 3 
#define COL 4 
void main() 
{ 
  int a[ROW][COL] = { {90, 85, 95, 100}, 
                      {75, 95, 80, 90}, 
                      {90, 80, 70, 60} 
                     }; 
  cout<< "     a :  " <<   a <<"\n"; 
  cout<< "    *a :  " <<  *a <<"\n"; 
  cout<< "   **a :  " << **a <<"\n"; 
  cout<<"-------------------------------------\n"; 
  cout<< " a + 1 :  " << a + 1 <<"\n"; 
  cout<< " a + 2 :  " << a + 2  <<"\n"; 
} 
