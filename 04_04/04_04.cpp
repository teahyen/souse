#include <iostream> 
using namespace std; 
int myMax(int x, int y) ;
void main( ) 
{ 
  int a, b; // ���������� �� ���� ������ �����Ѵ�. 
  cout << "\n �������� �� �� �Է��ϼ���. -> "; 
  cin >> a >> b;
 // �Լ� ȣ�� �� ������ 
  cout << " �ִ� => " << myMax(a, b) <<"\n"; 
} 
int myMax(int x, int y) 
{ 
  return ( (x > y) ? x : y ); // return ���� ���� ������ 
}