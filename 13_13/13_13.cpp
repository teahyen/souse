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
                                                     
  fin.open("..\\13_12\\insa.bin");                 
                                                     
  if(fin.fail()){                                      
     printf("Error: file open error\n");                 
     return;                                              
  }                                                    
                                                     
  cout<<" >> ���Ͽ��� �о�� ������ << \n";           
  cout<<"-----------------------------------\n";      
  cout<<" �̸� ���� �ּ� \n";                         
  cout<<"-----------------------------------\n";      
  while( fin.read((char *) &man, sizeof(man)) )        
    cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;
                                                     
  fin.close();                                         
}                                                    