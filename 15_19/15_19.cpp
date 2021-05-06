#include <iterator>// ostream_iterator
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int Increment(int n)
{
    return n+1;
}

void main()
{
   vector<int>  v(8) ;  
  
   for (int i = 0; i < v.size(); i++)
       v[i] = i + 1 ;

   ostream_iterator<int>  out_iter( cout, " : " );

   cout << "**********  �� �� �� ********** "<< endl;   
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;

   transform(v.begin(),v.end(), v.begin(), Increment);

   cout << "**********  �� �� �� ********** "<< endl;
   copy(v.begin(), v.end(), out_iter);
   cout <<endl;
}