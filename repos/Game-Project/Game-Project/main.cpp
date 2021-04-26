#include <iostream>
#include <string>
using namespace std;

typedef struct data {
	string NAME = "김태현";
	string ADDRESS = "안산";
	string PHONE = "010-3076-7910";
	string SPACE = "    ";
}DATA;

	
int main()
{
	DATA namecard;
	namecard.NAME;
	namecard.ADDRESS;
	namecard.PHONE;
	namecard.SPACE;

	namecard.NAME = namecard.NAME + namecard. SPACE;
	namecard.ADDRESS = namecard.ADDRESS + namecard. SPACE;
	namecard.PHONE = namecard.PHONE + namecard.SPACE;

	cout << namecard.NAME << endl;
	cout << namecard.ADDRESS << endl;
	cout << namecard.PHONE << endl;
	cout  << namecard.SPACE << endl;
	cin.get();

	return (0);
}