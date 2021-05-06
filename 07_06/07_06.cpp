#include <iostream> 
using namespace std; 
void main()
{
   char str[256]="Apple";
   char *ptr="Banana";
   
   cout<<"  str = "<<(int)str<<" \t str = "<<str<<"\n";
   cout<<"  ptr = "<<(int)ptr<<"\t ptr = "<<ptr<<"\n"; 
   
   // str="Grapes"; // 문자 배열은 다른 문자열 상수를 대입 못함
   
   //포인터 변수에는 다른 문자열 상수를 대입할 수 있음
   ptr="Orange"; 
   //포인터 변수 ptr에 다른 주소가 저장되어 있음
   cout<<"  ptr = "<<(int)ptr<<"\t ptr = "<<ptr<<"\n"; 
} 