#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Test {
	T valus;
public:
	Test(T v);
	void SetValue(T v);
	T GetValue();
};

template <typename T>
Test<T>::Test(T v)
{
	value = v;
}
template<typename T>
void Test<T>::SetValue(T v)
{
	value = v;
}
template <typename T>
T Test <T>::GetValue()
{
	return value;
}
