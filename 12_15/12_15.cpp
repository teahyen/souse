#include<iostream>                   
using namespace std;                 
class Base{                          
public:                              
  Base();                              
  ~Base();                             
};                                   
Base::Base()                         
{                                    
  cout<<" ��� Ŭ������ ������ "<<endl;
}                                    
Base::~Base()                        
{                                    
  cout<<" ��� Ŭ������ �Ҹ���"<<endl; 
}                                    
class Derived : public Base{         
public :                             
  Derived();                           
  ~Derived();                          
};                                   
Derived::Derived()                   
{                                    
  cout<<" �Ļ� Ŭ������ ������ "<<endl;
}                                    
Derived::~Derived()                  
{                                    
  cout<<" �Ļ� Ŭ������ �Ҹ��� "<<endl;
}                                    
                                     
void main()                          
{                                    
  Base *BasePtr = new Derived;         
  delete BasePtr;                      
}                                    