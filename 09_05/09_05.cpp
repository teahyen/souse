#include <iostream> 
using namespace std; 
#define MAX 20  
void main()
{
   int size;

#if MAX > 100     //조건이 만족하면 
   size = 100;    //size=100;을 처리하여 컴파일러에게 넘겨줌
#elif MAX > 10    //조건이 만족되지 않으면 MAX가 10보다 큰지를 봄 
   size = 10;     //size=10;을 처리하여 컴파일러에게 넘겨줌
#else             //어떤 조건에도 만족하지 않으면 
   size = 0;      //size=0;을 처리하여 컴파일러에게 넘겨줌
#endif
   
    cout<<" size = "<< size<<"\n";
}                                                                  