#include <iostream> 
using namespace std; 
 /* �Լ��� ����Ű�� ������ ���� ���� */
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