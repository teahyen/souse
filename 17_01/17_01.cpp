#include<iostream>                                  
#include<string>                                    
using namespace std;                                
                                                    
void main( )                                        
{                                                   
  char strA[100] = "Apple";                           
  char strB[100];                                     
  char strC[100];                                     
                                                    
  // strB = "Banana"; // ����                         
                                                    
  strcpy(strB, "Banana");                             
                                                    
  // strC = strA + strB; // ����                      
                                                    
  strcpy(strC, strA);                                 
  strcat(strC, strB);                                 
                                                    
  cout<<"## �� ���ڿ��� ����\n";                     
  cout<<strA<< " + " <<strB<< " = " <<strC<<"\n\\n";
                                                    
  cout<<"## strC[2] = "<<strC[2]<<"\n";              
}  