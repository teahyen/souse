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
    vector<int>::reverse_iterator riter;

    for(iter = v.begin(); iter != v.end(); iter++)
        cout << *iter <<"    ";
    cout << endl;

    for(riter = v.rbegin(); riter != v.rend(); riter++)
        cout << *riter <<"    ";
    cout << endl;
}