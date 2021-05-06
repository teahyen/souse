#include<iostream>                                  
#include<string>                                    
using namespace std;                                
                                                    
void main( )                                        
{                                                   
  char strA[100] = "Apple";                           
  char strB[100];                                     
  char strC[100];                                     
                                                    
  // strB = "Banana"; // 에러                         
                                                    
  strcpy(strB, "Banana");                             
                                                    
  // strC = strA + strB; // 에러                      
                                                    
  strcpy(strC, strA);                                 
  strcat(strC, strB);                                 
                                                    
  cout<<"## 두 문자열의 결합\n";                     
  cout<<strA<< " + " <<strB<< " = " <<strC<<"\n\\n";
                                                    
  cout<<"## strC[2] = "<<strC[2]<<"\n";              
}  