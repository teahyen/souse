#include<iostream>                
#include<string>                  
using namespace std;              
                                  
void main()                       
{                                 
  string strA("Apple");             
  string strB("Banana");            
                                  
  if(strA == strB)                  
    cout<<"## �� ���ڿ��� ����.\n";  
  else                              
    cout<<"## �� ���ڿ��� �ٸ���.\n";
                                  
  strB="Apple";                     
                                  
  if(strA == strB)                  
    cout<<"## �� ���ڿ��� ����.\n";
  else                              
    cout<<"## �� ���ڿ��� �ٸ���.\n";
                                  
  if(strA == "Apple")               
    cout<<"## �� ���ڿ��� ����.\n";  
  else                              
    cout<<"## �� ���ڿ��� �ٸ���.\n";
}               