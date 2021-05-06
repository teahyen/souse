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
    cout<<"파일 오픈을 실패했습니다."<<endl;
    return;                                 
  }                                       
                                         
  while(fin.get(ch))                      
  fout.put(ch);                           
                                        
  fin.close();                            
  fout.close();                           
}                                       