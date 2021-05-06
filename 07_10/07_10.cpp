#include <iostream> 
using namespace std;  
/* 함수를 가리키는 포인터 변수 선언  */
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
   while(1){ //무한 루프
     cout<<"0부터 3사이의 숫자를 입력하되 끝내려면 0 입력=> ";
     cin>>num;         
     switch(num){               
       case 0: cout<<"    종료 \n";
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
