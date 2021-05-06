#include <iterator>// ostream_iterator
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
   int arr[10]={30, 50, 10, 40, 30, 70, 30, 90, 20, 60}; 

   vector<int> v(10); 

   copy(arr, arr+10, v.begin()); //�迭�� ���ͷ� ����

   ostream_iterator<int>  out_iter( cout, " : " );

   cout << "****************   �� �� ��  **************** "<< endl;   
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;

   sort(v.begin(), v.end());
  
   cout << "****************   �� �� ��  **************** "<< endl;
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;

   vector<int>::iterator iter;
   iter = lower_bound(v.begin(), v.end(), 80);
   cout << "\n������ �� �ִ� ���ĵ� ��ġ�� ���� ù ��° ��ġ :" ; 
   cout << *iter << "\n\n";

   v.insert(iter, 80);

   cout << "****************   �� �� ��  **************** "<< endl;
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;
}