#include <iostream> 
using namespace std; 
void main()
{
   char str[256]="Apple";
   char *ptr="Banana";
   
   cout<<"  str = "<<(int)str<<" \t str = "<<str<<"\n";
   cout<<"  ptr = "<<(int)ptr<<"\t ptr = "<<ptr<<"\n"; 
   
   // str="Grapes"; // ���� �迭�� �ٸ� ���ڿ� ����� ���� ����
   
   //������ �������� �ٸ� ���ڿ� ����� ������ �� ����
   ptr="Orange"; 
   //������ ���� ptr�� �ٸ� �ּҰ� ����Ǿ� ����
   cout<<"  ptr = "<<(int)ptr<<"\t ptr = "<<ptr<<"\n"; 
} 