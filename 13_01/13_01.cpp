#include <iostream>                                  
using namespace std;                                 
                                                     
struct insa{                                         
  char name[20];                                       
  int age;                                             
  char address[20];                                    
};                                                   
                                                     
void main()                                          
{                                                    
  insa man={"������", 20, "����"};                     
                                                     
  cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;
}                                                    