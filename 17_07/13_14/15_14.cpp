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
                                                             
  int pos;                                                     
                                                             
  bool bFind=true;                                             
                                                             
  fin.open("..\\15_12\\insa.bin");                         
                                                             
  if(fin.fail()){                                              
    printf("Error: file open error\n");                         
    return;                                                      
}                                                            
                                                             
cout<<"# ���Ͽ��� ���° ��ġ�� �����͸� �а� ��������? => ";
cin>>pos;                                                    
                                                             
for(int i=0; i<pos; i++){                                    
  fin.read((char *) &man, sizeof(man));                        
  if(!fin.good()) {                                            
    bFind=false;                                                 
    break;                                                       
    }                                                            
  }                                                            
  if(bFind==true)                                              
    cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;        
  else                                                         
    cout<<"ã���� �ϴ� �����Ͱ� ����."<<endl;                    
                                                             
  fin.close();                                                 
}                                                            