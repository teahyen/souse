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

  if(b==0) {
     cout<<"���� ��Ȳ�� �߻��߽��ϴ�."<<endl;   
  }
  else{
     c = a / b;                                    
     cout<<"���� -> " << c <<endl;                           
     d = a % b;                                     
     cout<<"������ -> " << d <<endl;          
   }
}                                                