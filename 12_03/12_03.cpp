#include<iostream>                                             
using namespace std;                                           
class Calc{                                                    
protected:                                                     
  int a;                                                         
  int b;                                                         
  int c;                                                         
public:                                                        
  void Prn();                                                    
  Calc(int new_A,int new_B); // 기반 클래스에 생성자 추가        
};                                                             
                                                               
void Calc::Prn()                                               
{                                                              
  cout<<a<<"\t"<<b<<"\t"<<c<<endl;                             
}                                                              
                                                               
Calc::Calc(int new_A,int new_B) // 기반 클래스에 생성자 추가   
{                                                              
  a=new_A;                                                       
  b=new_B;                                                       
  c=0;                                                           
}                                                              
                                                               
void main()                                                    
{                                                              
  Calc x(3, 5);                                                  
  x.Prn();                                                       
}                                                              