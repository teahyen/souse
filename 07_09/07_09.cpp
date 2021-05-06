#include <iostream> 
using namespace std; 
 /* 함수를 가리키는 포인터 변수 선언 */
 void (*pf)(void); 
 void one()
 {
   cout<<" one \n";
 }
 void two()
 {
   cout<<" two \n";
 }
 void three()
 {
   cout<<" three \n";
 }
 void main( )
 {       
   pf = one;  
   pf( );       
 
   pf = two;    
   pf( );     
 
   pf = three; 
   pf( );       
 }