#include <iostream> 
using namespace std; 
struct namecard{ 
  char name[20]; 
  char job[30]; 
  char tel[20]; 
  char email[40]; 
  }; 
  
void structPrn(namecard temp); 
namecard structInput( ); 
 
void main() 
{ 
  namecard x={"������","�����̳�","345-0876","onejee@naver.com"}, 
                y={"������","ġ���ǻ� ","356-0868","eldy@naver.com"}; 
  namecard *p; 
  p=&x; 
  cout<<"  �̸� \t ���� \t\t ����ó \t �̸��� "; 
  cout<<"\n ============================================================="; 
  cout<<"\n "<<(*p).name<<"\t"<<(*p).job<<"\t" 
                  <<(*p).tel<<"\t"<<(*p).email; 
  p=&y; 
  cout<<"\n "<<p->name<<"\t"<<p->job<<"\t"<<p->tel<<"\t"<<p->email; 
  cout<<"\n ============================================================"; 
  
  cout<<"\n sizeof(x) => "<<sizeof(x); 
  cout<<"\n sizeof(p) => "<<sizeof(p)<<"\n"; 
} 