#include <iostream> 
using namespace std; 
void main()
{
  int a=10, b= 20, c=30;//정수형 변수 
  //포인터 배열에 변수의 주소를 저장해 둠
  int *p[3]={&a, &b, &c}; 
  
  //배열 원소에 * 연산자로 정수 값 얻어옴
  cout<<"\n   *p[0] : "<< *p[0];
  cout<<"\t   *p[1] : "<< *p[1];
  cout<<"\t   *p[2] : "<< *p[2];

  //* 연산자 대신 []로 정수 값 얻어옴
  cout<<"\n p[0][0] : "<< p[0][0];
  cout<<"\t p[1][0] : "<< p[1][0];
  cout<<"\t p[2][0] : "<< p[2][0];
  cout<<"\n";
}
