#include <iostream> 
using namespace std; 
// ����࿡�� ���ڿ��� �Է¹ޱ� ���� main�Լ��� ���� 
void main(int argc, char *argv[])
{
   cout<<" ����࿡ �Է��� ���ڿ��� ���� =" << argc << "\n\n";
   cout<<" >> ����࿡ �Է��� ���ڿ� << \n";
   for(int i=0; i<argc; i++)
     cout<<"  argv[ "<<i <<" ] =" << argv[i] <<"\n";
}