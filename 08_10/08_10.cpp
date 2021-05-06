#include <iostream> 
using namespace std; 
 //공용체 정의하기
 union  u_data{
   char ch;       //문자형 멤버
   int  num;     //정수형 멤버
 };   
 
 void main()
 {
    u_data test;   //공용체 변수 선언
    //공용체의 크기 출력
    cout<<" sizeof(u_data)\t : "<<sizeof(u_data) <<" byte \n";
    cout<<" &test        \t : " << (int)&test <<"\n";     //공용체 변수의 주소 
    cout<<" &test.ch    \t : " << (int)&test.ch <<"\n"; //공용체의 멤버의 주소 
    cout<<" &test.num \t : " << (int)&test.num <<"\n";    
 }