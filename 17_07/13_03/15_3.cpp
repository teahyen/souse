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
  insa man;                                             
                                                      
  ifstream fin;                                         
                                                      
// fin.open("insa.dat");                              
// fin.open("..\\15_02\\insa.dat");                
  fin.open("C:\\Work\\CookBook\\15_02\\insa.dat");
                                                      
  if(fin.fail()){                                       
    cout<<"파일 오픈에 실패했습니다."<<endl;              
  return;                                               
}                                                     
                                                      
  fin>>man.name>>man.age>>man.address;                  
                                                      
  cout<<man.name<<" "<<man.age<<" "<<man.address<<endl; 
                                                      
  fin.close();                                          
}                                                     