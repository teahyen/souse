#include<iostream>                                 
#include<string>                                   
using namespace std;                               
                                                   
void main()                                        
{                                                  
  string strA("Apple");                               
  string strB;                                       
  string strC;                                       
                                                   
  strB = "Banana";                                   
                                                   
  strC = strA + strB;                                
                                                   
  cout<<"## 두 문자열의 결합\n";                    
  cout<<strA<< " + " <<strB<< " = " <<strC<<"\n\n";
                                                   
  cout<<"## strC[2] = "<<strC[2]<<"\n";             
}