#include <iostream> 
using namespace std; 
//����ü �����ϱ�
union  u_data{
  char ch;       //������ ���
  int  num;      //������ ���
};   

void main()
{
   u_data test;   //����ü ���� ����
   test.num=0x12345678;

   cout<<" test.ch  = "<< hex <<(int) test.ch <<"\n";
   cout<<" test.num = "<< hex << test.num <<"\n"; 
}
