#include<iostream>                                            
using namespace std;                                          
class Calc{                                                   
protected:                                                    
  int a;                                                        
  int b;                                                        
public:                                                       
  Calc();                                                       
  Calc(int new_A,int new_B);                                    
  void Prn(); // 파생 클래스에서 오버라이딩할 멤버함수          
};                                                            
                                                              
Calc::Calc()                                                  
{                                                             
  a=0;                                                          
  b=0;                                                          
}                                                             
                                                              
Calc::Calc(int new_A,int new_B)                               
{                                                             
  a=new_A;                                                      
  b=new_B;                                                      
}                                                             
                                                              
void Calc::Prn() // 파생 클래스에서 오버라이딩할 멤버함수     
{                                                             
  cout<<"--- Calc::Prn ---"<<endl;                              
  cout<<a<<"\t"<<b<<endl;                                      
}                                                             
                                                              
class Add : public Calc{                                      
protected:                                                    
  int c;                                                        
public :                                                      
  Add();                                                        
  Add(int new_A,int new_B);                                     
  void Sum();                                                   
  void Prn(); // 기반 클래스의 멤버함수를 오버라이딩            
};                                                            
                                                              
Add::Add() : Calc()                                           
{                                                             
}                                                             
                                                              
Add::Add(int new_A,int new_B) :Calc(new_A, new_B)
{                                                             
  a=new_A;                                                      
  b=new_B;                                                      
  c=0;                                                          
}                                                             
                                                              
void Add::Sum()                                               
{                                                             
  c=a+b;                                                        
}                                                             
                                                              
void Add::Prn() // 기반 클래스의 멤버함수를 오버라이딩        
{                                                             
  cout<<"--- Add::Prn ---"<<endl;                               
  cout<<a<<" + "<<b<<" = "<<c<<endl;                            
}                                                             
                                                              
void main()                                                   
{                                                             
  Calc *CalcPtr;                                                
  CalcPtr = new Add(3, 5);                                      
  CalcPtr->Prn();                                               
}