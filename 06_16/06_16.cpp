#include <iostream> 
using namespace std; 
#define ROW 3 
#define COL 4 
void main() 
{ 
  int a[ROW][COL] = { {90, 85, 95, 100}, 
                      {75, 95, 80, 90}, 
                      {90, 80, 70, 60} 
                     };  
 cout<<"2���� �迭�� ����� ���ҵ��� �ּ�\n";  
  cout<<"------------------------------------------------------------------";  
  for(int r= 0; r<ROW; r++){ 
      cout<<"\n"<< r << "�� : "; 
      for(int c= 0; c<COL; c++) {
         cout<<"\t "<<&a[r][c]; // �迭�� �ּҰ� ��� 
      }
  } 
  cout<<"\n"; 
} 
