#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main( )
{
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    v2.push_back(3);
    v2.push_back(4);

    vector<int>::iterator iter ;

    iter = search(v1.begin(), v1.end(), v2.begin(), v2.end());
    
    if( iter != v1.end() )  {
        cout <<" v2�� v1�� ���� �����̸� ������ �����ϴ�." << endl;
        cout <<" ù ��° ���� ���� ���� ��ġ�� index�� " 
             << iter-v1.begin() << "�Դϴ�."  << endl;
    }
}