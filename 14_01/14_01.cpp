#include <iostream>                                     
using namespace std;                                    
void main()                                             
{                                                       
  int a, b, c, d;                                         
                                                        
  cout<<"�������� �ϱ� ���ؼ� �����͸� �Է��Ͻÿ�."<<endl;
  cout<<"������ ��(������)�� �Է��Ͻÿ� => ";             
  cin>>a;                                                 
  cout<<"������ ��(����)�� �Է��Ͻÿ� => ";               
  cin>>b;                                                 
  c = a / b; // (1)                                       
  cout<<"���� -> " << c <<endl;                           
  d = a % b; // (2)                                       
  cout<<"������ -> " << d <<endl;                         
}                                              