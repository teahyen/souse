#include <iostream> 
using namespace std; 
void main() 
{ 
  int total=0; 
  int i;
  for(i=1;i<=10;i++) { 
    if(i%2==0)    // i�� 2�� ����� �������� 
      continue;   // �Ʒ� ������� ���õǰ� for���� �������� �ٽ� 
                 // ���ư��� �����Ѵ�. 
      total+=i; 
    } 
    cout<<"i�� "<< i <<" �� �� for���� ���\n"; 
    cout<<"total : "<<total<<"\n"; 
} 