#include <iostream> 
using namespace std;

void divide(int a, int b)                                  
{                                                          
  int c, d;                                                  
                                                           
  cout<<" *** divide �Լ� *** "<<endl;                       
                                                           
  if(b==0)                                                   
    throw b;                                                   
  c = a / b;                                                 
  cout<<"���� -> " << c <<endl;                              
  d = a % b;                                                 
  cout<<"������ -> " << d <<endl;                            
  cout<<endl;                                                
}                                                          
                                                           
void main()                                                
{                                                          
  try{                                                       
    divide(10, 2);                                             
    divide(10, 0);                                             
    divide(10, 4);                                             
  }                                                          
  catch(int ex){                                             
    cout<< ex <<"�� �������� �õ��� �־����Ƿ� ���ܹ߻�"<<endl;
  }                                                          
  cout<<"\n���ܰ� �߻��ϴ��� ���� ����ȴ�."<<endl;       
}              