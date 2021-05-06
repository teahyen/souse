#include <iostream> 
using namespace std; 
#define _MYDEBUG 10

#ifdef _MYDEBUG
void sub( ){
  cout<<" debug  \n";
}
#endif

#ifndef _MYDEBUG
void sub( ){
   cout<<" release \n";
}
#endif

void main()
{
  sub();
}                                               