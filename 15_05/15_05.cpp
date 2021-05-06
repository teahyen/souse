#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
   vector<int>  v(8) ;   

   for (int i = 0; i < v.size(); i++)
        v[i] = i + 1 ;

    vector<int>::iterator iter;
    vector<int>::const_iterator citer;

    iter = v.begin();
    *iter = 100; // 가능!
    citer = v.begin();
    *citer = 100; // 에러 발생!
}