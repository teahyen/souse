#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void PrintVector(const vector<int> & v)
{
    //vector<int>::iterator iter = v.begin(); //컴파일 에러
    vector<int>::const_iterator citer = v.begin();

    for(  ; citer != v.end(); citer++)
        cout << *citer <<"     ";
    cout << endl;
}
void main()
{
   vector<int>  v(8) ;   

   for (int i = 0; i < v.size(); i++)
        v[i] = i + 1 ;

   PrintVector( v );
}