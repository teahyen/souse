#include <iostream>                                  
using namespace std;                                 
                                                     
struct insa{                                         
  char name[20];                                       
  int age;                                             
  char address[20];                                    
};                                                   
                                                     
void main()                                          
{                                                    
  insa man={"¼ºÀ±Á¤", 20, "¼­¿ï"};                     
                                                     
  cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;
}                                                    