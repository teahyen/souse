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
  insa man={"¼ºÀ±Á¤", 20, "¼­¿ï"};                     
                                                     
  ofstream fout;                                       
                                                     
  fout.open("insa.dat");                               
                                                     
  fout<<man.name<<" "<<man.age<<" "<<man.address<<endl;
                                                     
  fout.close();                                        
}                                                    