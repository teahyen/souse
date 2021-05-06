#include <iostream>         
using namespace std;        
                            
class Test{                 
  int value;                  
public :                    
  Test(int v);                
  void SetValue(int v);       
  int GetValue();             
};                          
                            
Test::Test(int v)           
{                           
  value = v;                  
}                           
                            
void Test::SetValue(int v)  
{                           
  value = v;                  
}                           
                            
int Test::GetValue()        
{                           
  return value;               
}                           
                            
void main()                 
{                           
  Test obj1(10);              
  obj1.SetValue(10);          
  cout<<obj1.GetValue()<<endl;
                            
  Test obj2(5.7);             
  cout<<obj2.GetValue()<<endl;
}        