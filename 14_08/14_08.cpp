#include <iostream>                           
using namespace std;                          
                                              
void func(int a) throw(char *, int)           
{                                             
  if(a==0)                                      
    throw "������ ���� 0 �̴�. ";                 
  else                                          
    throw a;                                      
}                                             
                                              
void main()                                   
{                                             
  try{                                          
    func(10);                                     
  }                                             
  catch(char *str){                             
    cout<<str<<endl;                              
  }                                             
  catch(int ex){                                
    cout<<"���� "<< ex <<"�� ���� ���ܹ߻�"<<endl;
  }                                             
}  