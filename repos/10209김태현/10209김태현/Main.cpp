#include <iostream>
using std::cout;
using std::endl;

class CNameCard
{
private:
 char *name;
 char *phon;
 char *address;
 char *position;
public:
 CNameCard(char* _name, char *_phon, char *_address, char *_position);
 CNameCard(const CNameCard & p);
 ~CNameCard();
 void ShowData();
};

CNameCard::CNameCard(char *_name, char *_phon, char *_address, char *_position)
{
 name = new char[strlen(_name)+1];
 strcpy(name, _name);

 phon = new char[strlen(_phon)+1];
 strcpy(phon, _phon);

 address = new char[strlen(_address)+1];
 strcpy(address, _address);

 position = new char[strlen(_position)+1];
 strcpy(position, _position);
}

CNameCard::CNameCard(const CNameCard & p)
{
 name = new char[strlen(p.name)+1];
 strcpy(name, p.name);

 phon = new char[strlen(p.phon)+1];
 strcpy(phon, p.phon);

 address = new char[strlen(p.address)+1];
 strcpy(address, p.address);

 position = new char[strlen(p.position)+1];
 strcpy(position, p.position);
}

CNameCard::~CNameCard()
{
 delete [] name;
 delete [] phon;
 delete [] address;
 delete [] position;
}

void CNameCard::ShowData()
{
 cout << "이름 : " << name << endl;
 cout << "전화 : " << phon << endl;
 cout << "주소 : " << address << endl;
 cout << "직업 : " << position << endl;
}

int main()
{
 CNameCard Son("김태현", "010-3076-7910", "안산", "학생");
 CNameCard Son2(Son);
 Son2.ShowData();
 return 0;
}