#include <iostream> 
using namespace std; 
 //����ü �����ϱ�
 union  u_data{
   char ch;       //������ ���
   int  num;     //������ ���
 };   
 
 void main()
 {
    u_data test;   //����ü ���� ����
    //����ü�� ũ�� ���
    cout<<" sizeof(u_data)\t : "<<sizeof(u_data) <<" byte \n";
    cout<<" &test        \t : " << (int)&test <<"\n";     //����ü ������ �ּ� 
    cout<<" &test.ch    \t : " << (int)&test.ch <<"\n"; //����ü�� ����� �ּ� 
    cout<<" &test.num \t : " << (int)&test.num <<"\n";    
 }