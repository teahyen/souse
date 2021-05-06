#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
    vector<int>  v(8);   

    for (int i= 0; i < v.size(); i++)
        v[i] = i + 1 ;

   if( binary_search(v.begin(), v.end(), 2) )
        cout << "2 찾음!" << endl;
    else
        cout << "2 못 찾음!" << endl;

    if( binary_search(v.begin(), v.end(), 10) )
        cout << "10 찾음!" << endl;
    else
        cout << "10 못 찾음!" << endl;
}