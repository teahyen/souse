#include<iostream>                                            
using namespace std;                                          
class Calc{                                                   
protected:                                                    
  int a;                                                        
  int b;                                                        
public:                                                       
  Calc();                                                       
  Calc(int new_A,int new_B);                                    
  void Prn(); // �Ļ� Ŭ�������� �������̵��� ����Լ�          
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
                                                              
void Calc::Prn() // �Ļ� Ŭ�������� �������̵��� ����Լ�     
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
  void Prn(); // ��� Ŭ������ ����Լ��� �������̵�            
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
                                                              
void Add::Prn() // ��� Ŭ������ ����Լ��� �������̵�        
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