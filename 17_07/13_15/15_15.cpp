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
  int total_rec;                                                               
                                                                             
  fin.open("..\\15_12\\insa.bin");                                         
                                                                             
  if(fin.fail()) {                                                           
    printf("Error: file open error\n");                                         
    return;                                                                 
  }        

  fin.seekg(0, ios::end);                                                      
                                                                             
  total_rec=fin.tellg()/sizeof(insa);                                          
                                                                             
  cout<<"���� ���ڵ��� �� ������ " <<total_rec<<"�Դϴ�.\n";             
                                                                             
  cout<<"#���Ͽ��� ���° ��ġ�� �����͸� �а� ��������(�Ѱ������� ����)=>";
  cin>>pos;                                                               
                                                                             
  if(pos >= total_rec){                                                        
    cout<<"���ڵ� ã�⿡ �����Ͽ����ϴ�."<<endl;                           
    return;                                                                   
  }                                                                         
                                                                             
  fin.seekg((pos-1)*sizeof(insa), ios::beg);                                   
                                                                             
  fin.read((char *) &man, sizeof(man));                                        
                                                                             
  cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;                                                                                              
  fin.close();                                                                 
}                                                                            