#include <iostream> 
using namespace std; 
//열거형 COLOR를 선언함
enum COLOR { RED=-1, GREEN, BLUE=35, WHITE, BLACK=2 };
void main( )
{
   enum COLOR  test; //열거형 변수 test를 선언함  
      
   cout<<" RED    = "<< RED<<"\n";
   cout<<" GREEN  = "<< GREEN<<"\n";
   cout<<" BLUE   = "<< BLUE<<" \n";
   cout<<" WHITE  = "<<WHITE <<" \n";
   cout<<" BLACK  = "<< BLACK<<" \n";

   //열거형 변수 test에 {}안의 멤버 중의 하나인 BLUE를 지정
   test = BLUE;   
   cout<<" test   = "<<test <<"\n\n";//test는 정수값 35로 정의되어 있음 
  
   switch(test){
   case RED   : 
	   cout<<" 빨간색 선택\n"; 
	   break;
   case GREEN : 
	   cout<<" 초록색 선택\n"; 
	   break;
   case BLUE  : 
	   cout<<" 파란색 선택\n"; 
	   break;
   case WHITE : 
	   cout<<" 하얀색 선택\n"; 
	   break;
   case BLACK : 
	   cout<<" 검정색 선택\n"; 
	   break;
   }
}