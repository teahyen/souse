#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main( )
{
    vector<int>  v(8);   
  
    for (int i = 0; i < v.size(); i++)
        v[i] = i + 1;

    vector<int>::reverse_iterator riter;         //�� ��� �� �ݺ���
    vector<int>::const_reverse_iterator criter;  //��� �� �ݺ��� 

    for(riter = v.rbegin(); riter != v.rend(); riter++)
        cout << *riter <<"   ";
    cout << endl;

    for(criter = v.rbegin(); criter != v.rend(); criter++)
        cout << *criter <<"   ";
    cout << endl;
}