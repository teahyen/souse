#include <iostream>                                  
#include <fstream>                                   
using namespace std;                                 
                                                     
struct insa{                                         
  char name[20];                                       
  int age;                                             
  char address[20];                                    
};                                                   
                                                     
void main()                                          
{                                                    
  insa man={"������", 20, "����"};                     
                                                     
  ofstream fout;                                       
                                                     
  fout.open("insa.dat");                               
                                                     
  fout<<man.name<<" "<<man.age<<" "<<man.address<<endl;
                                                     
  fout.close();                                        
}                                                    