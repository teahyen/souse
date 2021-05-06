#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

void main( )
{
    vector<int>  v(10);   

    for (int i= 0; i < v.size(); i++)
        v[i] = i + 1 ;

    cout << accumulate(v.begin(), v.end(), 0) << endl;
    cout << accumulate(v.begin(), v.end(), 100) << endl;
}