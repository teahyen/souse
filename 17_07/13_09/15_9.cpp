#include <fstream>                      
#include <iostream>                     
using namespace std;                    
                                        
void main()                             
{                                       
  ifstream fin;                           
  ofstream fout;                          
                                        
  char ch;                                
                                        
  fin.open("15_9.cpp");                   
  fout.open("dest.cpp");                  
                                        
  if(fin.fail() || fout.fail()){          
    cout<<"���� ������ �����߽��ϴ�."<<endl;
    return;                                 
  }                                       
                                         
  while(fin.get(ch))                      
  fout.put(ch);                           
                                        
  fin.close();                            
  fout.close();                           
}                                       