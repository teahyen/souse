#include <iostream> 
using namespace std; 
#define MAX 20  
void main()
{
   int size;

#if MAX > 100     //������ �����ϸ� 
   size = 100;    //size=100;�� ó���Ͽ� �����Ϸ����� �Ѱ���
#elif MAX > 10    //������ �������� ������ MAX�� 10���� ū���� �� 
   size = 10;     //size=10;�� ó���Ͽ� �����Ϸ����� �Ѱ���
#else             //� ���ǿ��� �������� ������ 
   size = 0;      //size=0;�� ó���Ͽ� �����Ϸ����� �Ѱ���
#endif
   
    cout<<" size = "<< size<<"\n";
}                                                                  