#pragma once
#include <iostream>
#include <string>
using  namespace std;

class CNamecard
{
public:
	CNamecard();
	~CNamecard();
private:

public:
    string Add();
    string Del();
	string Menu();
	string Exit();
	string Save();
	string Input();
	string GetData();
	string SetData();
};

