#include<iostream>                                         
#include<string>                                             
using namespace std;                                               
                                                             
class MyString                                               
{                                                            
private :                                                    
  int m_nLen;                                                  
  char *m_pStr;                                                
public :                                                     
  MyString();                                                  
  MyString(const char * const str);                            
  ~MyString();                                                 
  friend ostream & operator<<(ostream & os, MyString & temp);
  MyString(const MyString& str);                               
  MyString& operator=(const MyString &temp);               
  MyString operator+(const MyString &rightHand);           
  char operator[](int n);                                      
};                                                           
                                                             
MyString MyString::operator+(const MyString &rightHand)     
{                                                            
  int tot_len = m_nLen + rightHand.m_nLen-1;                   
  char * temp = new char[tot_len];                             
 strcpy(temp, m_pStr);                                        
  strcat(temp, rightHand.m_pStr);                              
  MyString result(temp);                                       
  delete [] temp;                                              
  return result;                                               
}                                                            
                                                             
char MyString::operator[](int n)                             
{                                                            
  if( n > m_nLen )                                             
    return m_pStr[m_nLen-1];                                     
  else                                                         
    return m_pStr[n];                                            
}                                                            
                                                             
MyString& MyString::operator=(const MyString &temp)          
{                                                            
  if(this == &temp)                                            
    return *this                                                
                                                             
  delete [] m_pStr;                                            
  m_nLen = temp.m_nLen;                                        
  m_pStr = new char[m_nLen];                                   
  strcpy(m_pStr, temp.m_pStr);                                 
  return *this                                                
}                                                            
                                                             
MyString::MyString(const MyString & src)                     
{                                                            
  m_nLen=src.m_nLen;                                           
  m_pStr=new char[m_nLen];                                     
  strcpy(m_pStr, src.m_pStr);                                
}                                                            
                                                             
MyString::MyString()                                         
{                                                            
  m_nLen=1;                                                    
  m_pStr=new char[m_nLen];                                     
  strcpy(m_pStr, "");                                          
}                                                            
                                                             
MyString::MyString(const char * const str)                   
{                                                            
  m_nLen = strlen(str)+1;                                      
  m_pStr = new char[m_nLen];                                   
  strcpy(m_pStr, str);                                         
}                                                            
                                                             
MyString::~MyString()                                        
{                                                            
  delete []m_pStr;                                             
  m_nLen = 0                                                  
  m_pStr = NULL                                               
}                                                            
                                                             
ostream & operator<<(ostream & os, MyString & temp)        
{                                                            
  cout<<temp.m_pStr;                                           
  return os                                                   
}                          

void main()                       
{                                 
  MyString strA("Apple");           
  MyString strB("Banana");          
                                  
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
