#include <iostream> 
using namespace std; 
void main()
{
  int a=10, b= 20, c=30;//������ ���� 
  //������ �迭�� ������ �ּҸ� ������ ��
  int *p[3]={&a, &b, &c}; 
  
  //�迭 ���ҿ� * �����ڷ� ���� �� ����
  cout<<"\n   *p[0] : "<< *p[0];
  cout<<"\t   *p[1] : "<< *p[1];
  cout<<"\t   *p[2] : "<< *p[2];

  //* ������ ��� []�� ���� �� ����
  cout<<"\n p[0][0] : "<< p[0][0];
  cout<<"\t p[1][0] : "<< p[1][0];
  cout<<"\t p[2][0] : "<< p[2][0];
  cout<<"\n";
}