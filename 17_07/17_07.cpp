#include<iostream>                
#include<string>                  
using namespace std;              
                                  
void main()                       
{                                 
  string strA("Apple");             
  string strB("Banana");            
                                  
  if(strA == strB)                  
    cout<<"## 두 문자열이 같다.\n";  
  else                              
    cout<<"## 두 문자열이 다르다.\n";
                                  
  strB="Apple";                     
                                  
  if(strA == strB)                  
    cout<<"## 두 문자열이 같다.\n";
  else                              
    cout<<"## 두 문자열이 다르다.\n";
                                  
  if(strA == "Apple")               
    cout<<"## 두 문자열이 같다.\n";  
  else                              
    cout<<"## 두 문자열이 다르다.\n";
}               