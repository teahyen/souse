#include <iostream> 
using namespace std; 
// 명령행에서 문자열을 입력받기 위한 main함수의 형태 
void main(int argc, char *argv[])
{
   cout<<" 명령행에 입력한 문자열의 개수 =" << argc << "\n\n";
   cout<<" >> 명령행에 입력한 문자열 << \n";
   for(int i=0; i<argc; i++)
     cout<<"  argv[ "<<i <<" ] =" << argv[i] <<"\n";
}