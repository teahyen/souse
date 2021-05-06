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
                                                                             
  cout<<"현재 레코드의 총 개수는 " <<total_rec<<"입니다.\n";             
                                                                             
  cout<<"#파일에서 몇번째 위치의 데이터를 읽고 싶은가요(총개수보다 적게)=>";
  cin>>pos;                                                               
                                                                             
  if(pos >= total_rec){                                                        
    cout<<"레코드 찾기에 실패하였습니다."<<endl;                           
    return;                                                                   
  }                                                                         
                                                                             
  fin.seekg((pos-1)*sizeof(insa), ios::beg);                                   
                                                                             
  fin.read((char *) &man, sizeof(man));                                        
                                                                             
  cout<<man.name<<" "<<man.age<<" "<<man.address<<endl;                                                                                              
  fin.close();                                                                 
}                                                                            