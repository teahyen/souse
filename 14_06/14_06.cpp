#include <iostream>                                        
using namespace std;                                       
                                                           
void divide(int a, int b)                                  
{                                                          
  int c, d;                                                  
                                                           
  cout<<"\n *** divide 함수 *** "<<endl;                    
                                                           
  try{                                                       
    if(b==0)                                                   
      throw b;                                                   
    c = a / b;                                                 
    cout<<"몫은 -> " << c <<endl;                              
    d = a % b;                                                 
    cout<<"나머지 -> " << d <<endl;                            
  }                                                          
  catch(int ex){                                             
    cout<< ex <<"로 나누려는 시도가 있었으므로 예외발생"<<endl;
  }                                                          
}                                                          
                                                           
void main()                                                
{                                                          
  divide(10, 2);                                             
  divide(10, 0);                                             
  divide(10, 4);                                             
  cout<<"\n예외가 발생하더라도 정상 종료된다."<<endl;       
}    
