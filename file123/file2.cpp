#include<iostream>
using namespace std;
extern int a;
void sub1( )
{
  a+=100;
  cout<<"\n sub1ÀÇ a (file2.cpp) ==> " << a;
}
