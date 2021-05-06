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
 cout<<"2차원 배열에 저장된 원소들의 주소\n";  
  cout<<"------------------------------------------------------------------";  
  for(int r= 0; r<ROW; r++){ 
      cout<<"\n"<< r << "행 : "; 
      for(int c= 0; c<COL; c++) {
         cout<<"\t "<<&a[r][c]; // 배열의 주소값 출력 
      }
  } 
  cout<<"\n"; 
} 
