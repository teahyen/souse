#include <iostream>                                   
#include <fstream>                                    
using namespace std;                                  
                                                      
void main()                                           
{                                                     
  char ch;                                              
                                                      
  ifstream fin;                                         
                                                      
  fin.open("C:\\Work\\CookBook\\15_05\\test.dat");
                                                      
  if(fin.fail()){                                       
   cout<<"���� ���¿� �����߽��ϴ�."<<endl;              
    return;                                               
  }                                                     
                                                      
  while( fin.get(ch) )                                  
  cout.put(ch);                                         
                                                      
  fin.close();                                          
}                                                     