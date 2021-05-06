#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool is_odd(int num)
{
    return num % 2 ==1 ;
}

void main()
{
    vector<int>  v(8);  
  
    v.push_back(3);
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
    v.push_back(4);
    v.push_back(1);
    v.push_back(3);

   int total;
   total  = count(v.begin(), v.end(), 3);
   cout <<" 3의 개수는 "<< total << endl;

   total  = count_if(v.begin(), v.end(), is_odd);
   cout <<" 홀수의 개수는 "<< total << endl;
}