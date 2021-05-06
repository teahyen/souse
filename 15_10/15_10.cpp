#include <map>
#include <string>
#include <iostream>
using namespace std;
 
void main()
{
     map<string, string> PhoneBooks;
     map<string, string>::iterator iter;

     string Name;
 
    PhoneBooks["김선호"]="010-1111-1111";
    PhoneBooks["배준모"]="010-2222-2222";
    PhoneBooks["송기수"]="010-3333-3333";
    PhoneBooks["강수민"]="010-5555-5555";

    for (;;) {
       cout << "이름을 입력하시오(exit로 종료) : ";
       cin >> Name;
       if (Name=="exit") 
		   break;
       iter=PhoneBooks.find(Name);
       if (iter == PhoneBooks.end()) {
          cout << "그런 사람은 없다.\n";
       } else {
          cout<<Name<<"의 전화번호는"<<iter->second<<"이다.\n";
       }
    }
}