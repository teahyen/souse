#include <iostream> 
using namespace std; 
int myAbs(int x) 
{ 
  int y; // ���밪�� ������ ���� 
  if(x < 0) // ���밪�� ���ϴ� ���� 
    y = -x; 
  else 
    y = x; 
  return y; // ������ ������� return ������ ��ȯ�Ѵ�. 
} 
void main( ) 
{ 
  int a, result; 
  cout << "\n ������ �ϳ��� �Է��ϼ���. -> "; 
  cin >> a; 
  result = myAbs(a); // �Լ��� ������� ���� result�� �����Ѵ�. 
  cout <<" ���� ������ " << result << " �̴�. \n" ; 
} 