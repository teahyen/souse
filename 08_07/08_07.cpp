#include <iostream> 
using namespace std; 
struct namecard{ 
  char name[20]; 
  char job[30]; 
  char tel[20]; 
  char email[40]; 
}; 
 
void structPrn(namecard temp); 
void structInput(namecard *pTemp); 
 
void main() 
{ 
  namecard x, y, z; 
  
  structInput(&x); 
  structInput(&y); 
  structInput(&z); 
  
   cout<<"  이름 \t 직업 \t\t 연락처 \t 이메일 "; 
  cout<<"\n============================================"; 
  structPrn(x); 
  structPrn(y); 
  structPrn(z); 
  cout<<"\n=========================================\n"; 
} 
 
void structPrn(namecard temp) 
{ 
  cout<<"\n"<<temp.name<<"\t"<<temp.job<<"\t"
       <<temp.tel<<" \t"<<temp.email; 
} 
 
void structInput(namecard *pTemp) 
{ 
  cout<<"이름을 입력하세요=>"; 
  cin>>pTemp->name; 
  cout<<"직업을 입력하세요=>"; 
  cin>>pTemp->job; 
  cout<<"연락처를 입력하세요=>"; 
  cin>>pTemp->tel; 
  cout<<"이메일을 입력하세요=>"; 
  cin>>pTemp->email; 
} 