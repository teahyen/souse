#include <iostream>
#include <string>
#pragma once
using namespace std;
class CNamecard
{
public:
	CNamecard();
	CNamecard(int age, string name = " ") :age(age), name(name) {}
	~CNamecard();
private:
	string name;
	int age;
public:
	inline void pm() const 
	{
		cout << this->age << this->name << endl;
	}
	int Add(int num1 = 0, int num2 = 0);
	float Add(float num1 = 0, float num2 = 0);
};


