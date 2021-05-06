#include<iostream>                                  
using namespace std;                                
class Calc{                                         
protected:                                          
  int a;                                              
  int b;                                              
public:                                             
  Calc();                                             
  Calc(int new_A,int new_B);                          
  virtual void Prn(); // 기반 클래스에서 가상함수 선언
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
                                                    
void Calc::Prn()                                    
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
  void Prn();                                         
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
                                                    
void Add::Prn()                                     
{                                                   
  cout<<"--- Add::Prn ---"<<endl;                     
  cout<<a<<" + "<<b<<" = "<<c<<endl;                  
}                                                   
                                                    
void main()                                         
{                                                   
  Calc *CalcPtr;                                      
  CalcPtr = new Add(3, 5);                            
 //CalcPtr->Sum();                                  
  CalcPtr->Prn();                                     
}                                                   