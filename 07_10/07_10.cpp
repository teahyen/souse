#include <iostream> 
using namespace std;  
/* �Լ��� ����Ű�� ������ ���� ����  */
void (*pf)(void);   
void one()
{
  cout<<"    one \n" ;
}
void two()
{
  cout<<"    two \n";
}
void three()
{
  cout<<"    three \n";
}
void main( )
{
   int num;  
   while(1){ //���� ����
     cout<<"0���� 3������ ���ڸ� �Է��ϵ� �������� 0 �Է�=> ";
     cin>>num;         
     switch(num){               
       case 0: cout<<"    ���� \n";
                return;       
       case 1: pf = one;  
               break;
       case 2: pf = two; 
               break;
       case 3: pf = three;
               break;
     }
     pf();  
  }
}
