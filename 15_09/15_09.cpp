#include <list>
#include <iostream>
using namespace std;
 
void main()
{
   list<int> li;
 
   for (int i = 0; i < 8; i++)
     li.push_back(i + 1);

   list<int>::iterator iter;

   for(iter = li.begin(); iter != li.end(); iter++)
     cout << *iter <<"    ";
   cout << endl;
}