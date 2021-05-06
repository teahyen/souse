#include <iostream> 
using namespace std;  
void prn(const int * p, int size);
void main()
{
   int a[5] = {10, 20, 30, 40, 50};
   int size=sizeof(a)/sizeof(a[0]);

   prn(a, size);
}

void prn(const int * p, int size)
{
   for(int i=0; i<5; i++)   
       cout<<p[i]<<"\t";
   cout<<"\n";
   // p[0]=100;
} 