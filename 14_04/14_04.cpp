#include <iostream>                                        
using namespace std;                                       
void main()                                                
{                                                          
  int a, b, c, d;                                            
                                                           
  cout<<"�������� �ϱ� ���ؼ� �����͸� �Է��Ͻÿ�."<<endl;   
  cout<<"������ ��(������)�� �Է��Ͻÿ� => ";                
  cin>>a;                                                    
  cout<<"������ ��(����)�� �Է��Ͻÿ� =>";                   
  cin>>b;                                                    
  try{                                                       
    if(b==0){                                                  
      throw b;                                                   
    }                                                          
    c = a / b;                                                 
    cout<<"���� -> " << c <<endl;                              
    d = a % b;                                                 
    cout<<"������ -> " << d <<endl;                            
  }                                                          
  catch(double ex){                                          
    cout<< ex <<"�� �������� �õ��� �־����Ƿ� ���ܹ߻�"<<endl;
    }                                                          
    cout<<"���ܰ� �߻��ϴ��� ���� ����ȴ�."<<endl;          
}    