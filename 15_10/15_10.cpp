#include <map>
#include <string>
#include <iostream>
using namespace std;
 
void main()
{
     map<string, string> PhoneBooks;
     map<string, string>::iterator iter;

     string Name;
 
    PhoneBooks["�輱ȣ"]="010-1111-1111";
    PhoneBooks["���ظ�"]="010-2222-2222";
    PhoneBooks["�۱��"]="010-3333-3333";
    PhoneBooks["������"]="010-5555-5555";

    for (;;) {
       cout << "�̸��� �Է��Ͻÿ�(exit�� ����) : ";
       cin >> Name;
       if (Name=="exit") 
		   break;
       iter=PhoneBooks.find(Name);
       if (iter == PhoneBooks.end()) {
          cout << "�׷� ����� ����.\n";
       } else {
          cout<<Name<<"�� ��ȭ��ȣ��"<<iter->second<<"�̴�.\n";
       }
    }
}