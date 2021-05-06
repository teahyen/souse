#include<iostream>                                
using namespace std;                              
class Calc{                                       
protected:                                        
  int a;                                            
  int b;                                            
public:                                           
  Calc();                                           
  Calc(int new_A,int new_B);                        
  void Prn();                                       
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
  cout<<a<<"\t"<<b<<endl;                          
}                                                 
                                                  
class Add : public Calc{                          
protected:                                        
  int c;                                            
public :                                          
  Add();                                                                     
  Add(int new_A,int new_B);                         
  void Sum();                                       
  void Prn(); // �������̵�                         
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
                                                  
void Add::Prn() // �������̵�                     
{                                                 
  cout<<a<<" + "<<b<<" = "<<c<<endl;                
}                                                 
                                                  
class Mul : public Calc{                          
protected:                                        
  int c;                                            
public:                                           
  Mul();                                            
  Mul(int new_A,int new_B);                         
  void Gob();                                       
  void Prn(); // �������̵�                         
};                                                
                                                                             
Mul::Mul() {                                   
                                                  
}                                                 
Mul::Mul(int new_A,int new_B) :Calc(new_A, new_B) 
{                                                 
  a=new_A;                                          
  b=new_B;                                          
  c=0;                                              
}                                                 
void Mul::Gob()                                   
{                                                 
  c=a*b;                                            
}                                                 
                                                  
void Mul::Prn() // �������̵�                     
{                                                 
  cout<<a<<" * "<<b<<" = "<<c<<endl;                
}                                                 
                                                  
void main()                                       
{                                                 
  Calc x(3, 5);                                     
  x.Prn();                                          
  Add y(3, 5);                                      
  y.Sum();                                          
  y.Prn();                                          
  Mul z(3, 5);                                      
  z.Gob();                                          
  z.Prn();                                          
}                                                 