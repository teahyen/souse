#include <iostream> 
using namespace std; 
//공용체 정의하기
union  u_data{
  char ch;       //문자형 멤버
  int  num;      //정수형 멤버
};   

void main()
{
   u_data test;   //공용체 변수 선언
   test.num=0x12345678;

   cout<<" test.ch  = "<< hex <<(int) test.ch <<"\n";
   cout<<" test.num = "<< hex << test.num <<"\n"; 
}
