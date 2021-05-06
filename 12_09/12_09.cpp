#include<iostream>                            
using namespace std;                          
class Calc{                                   
protected:                                    
  int a;                                        
  int b;                                        
public:                                       
  Calc();                                       
  Calc(int new_A,int new_B);                    
  void CalcPrn();                               
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
                                              
void Calc::CalcPrn()                          
{                                             
  cout<<"--- Calc::CalcPrn ---"<<endl;          
  cout<<a<<"\t"<<b<<endl;                      
}                                             
                                              
class Add : public Calc{                      
protected:                                    
  int c;                                        
public :                                      
  Add();                                        
  Add(int new_A,int new_B);                     
  void Sum();                                   
  void AddPrn();                                
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
                                              
void Add::AddPrn()                            
{                                             
  cout<<"--- Add::AddPrn ---"<<endl;            
  cout<<a<<" + "<<b<<" = "<<c<<endl;            
}                                             
        
void main()                          
{                                    
  Calc *CalcPtr;                       
  CalcPtr = new Add(3, 5); // 업 캐스팅
  CalcPtr->CalcPrn();                  
  //CalcPtr->Sum();                   
                                     
  Add *AddPtr;                           
  AddPtr=(Add *)CalcPtr; // 다운 캐스팅
  AddPtr->CalcPrn();                   
  AddPtr->Sum();                       
  AddPtr->AddPrn();                    
}                        