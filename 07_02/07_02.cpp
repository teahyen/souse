#include <iostream> 
using namespace std; 
void prn(int a[],int size); 
void main( ) 
{ 
  int a[5] = {10,20,30,40,50}; 
  prn(a, 5); 
  cout << " main 함수 sizeof(a) : "<< sizeof(a) << endl; 
} 
void prn(int a[], int size) 
{ 
  for(int i = 0;i<size;i++) 
  cout<<"\t"<<a[i]; 
  cout<< endl; 
  cout << "  prn 함수 sizeof(a) : "<< sizeof(a) << endl; 
} 
