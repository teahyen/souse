#include <iostream> 
using namespace std; 

enum COLOR { RED, GREEN, BLUE, WHITE, BLACK };
void main( )
{
   enum COLOR  test;  

   test = BLUE;   
   cout<<" test   = "<<test <<"\n\n";//test�� ������ 2�� ���ǵǾ� ���� 
  
   cout<<" RED    = "<< RED<<"\n";
   cout<<" GREEN  = "<< GREEN<<"\n";
   cout<<" BLUE   = "<< BLUE<<" \n";
   cout<<" WHITE  = "<<WHITE <<" \n";
   cout<<" BLACK  = "<< BLACK<<" \n";
}