#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CManager
{
public:
	vector<CNameCard> v;
	CManager();
	~CManager();

private:

public:
	void Load()
	{

	}
	void Input()
	{
		cout << "\n >>������ �Է� �۾� <<";
		CNameCard temp;
		temp.getNameCard();
		v.push_back(temp);
	}
	void Display()
	{
		cout << "\n >> ��ü �л� ���� ��� <<  \n";
		title();
		for_each(v.begin(), v.end(), PrintElement);
	}
	void Delete()
	{

	}
	void Search()
	{

	}
	void Save()
	{

	}
	void Exit()
	{

	}
	void select_menu()
	{

	}
};

CManager::CManager()
{
}

CManager::~CManager()
{
}

void Mainmenu()
{
	CManager sm;
	sm.Load();

	char ch;
	cout << "			���� ���� ���α׷�";
	while (1)
	{
		ch = select_menu();
		switch (ch)
		{
		case' 1 ': sm.Input();		break;
		case' 2 ': sm.Delete();		break;
		case ' 3 ':sm.Search();		break;
		case' 4 ': sm.Load();			break;
		case' 5 ': sm.Save();			break;
		case' 6 ': sm.Search();		break;
		case' 7 ': sm.Exit();			exit(0);
		}
	}
}