#include <iostream> 
using namespace std; 
int myMax(int x, int y) ;
void main( ) 
{ 
  int a, b; // 정수형으로 두 개의 변수를 선언한다. 
  cout << "\n 정수값을 두 개 입력하세요. -> "; 
  cin >> a >> b;
 // 함수 호출 후 결과출력 
  cout << " 최댓값 => " << myMax(a, b) <<"\n"; 
} 
int myMax(int x, int y) 
{ 
  return ( (x > y) ? x : y ); // return 문에 조건 연산자 
}