#include <iterator>// ostream_iterator
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void main()
{
   vector<int>  v(8);   

    for (int i= 0; i < v.size(); i++)
        v[i] = i + 1 ;

   ostream_iterator<int>  out_iter( cout, "  :  " );

   cout << "****************   �� �� ��  **************** "<< endl;   
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;

   random_shuffle( v.begin(), v.end() );
  
   cout << "****************   �� �� ��  **************** "<< endl;
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;
}