#include <iostream>                                        
using namespace std;                                       
                                                           
void divide(int a, int b)                                  
{                                                          
  int c, d;                                                  
                                                           
  cout<<"\n *** divide �Լ� *** "<<endl;                    
                                                           
  try{                                                       
    if(b==0)                                                   
      throw b;                                                   
    c = a / b;                                                 
    cout<<"���� -> " << c <<endl;                              
    d = a % b;                                                 
    cout<<"������ -> " << d <<endl;                            
  }                                                          
  catch(int ex){                                             
    cout<< ex <<"�� �������� �õ��� �־����Ƿ� ���ܹ߻�"<<endl;
  }                                                          
}                                                          
                                                           
void main()                                                
{                                                          
  divide(10, 2);                                             
  divide(10, 0);                                             
  divide(10, 4);                                             
  cout<<"\n���ܰ� �߻��ϴ��� ���� ����ȴ�."<<endl;       
}    
