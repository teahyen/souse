#include <iostream> 
using namespace std; 
#define ROW 3 
#define COL 5 
void main() 
{ 
  int a[ROW][COL] = {0, }; 
  int r, c;  
  
  for(r= 0; r<ROW; r++){ 
    a[r][0] =r+1; 
    cout<<"# "<< a[r][0] <<" ��° �л��� ������ �Է��ϼ���\n"; 
    for(c= 1; c <= COL-2; c++) { 
      cout<<c << "��° ���� => " ; 
      cin>>a[r][c]; 
    } 
  } 
  
  for(r= 0; r<ROW; r++){ 
    for(c=1; c<=COL-2; c++) { 
          a[r][COL-1] += a[r][c]; 
    } 
  } 
  cout<<"\n \t\t **  �� �� �� ��  **"; 
  cout<<"\n------------------------------------------------"; 
  cout<<"\n \t��ȣ \t���� \t���� \t���� \t����"; 
  cout<<"\n------------------------------------------------\n"; 
  for(r= 0; r<ROW; r++){ 
    for(c= 0; c<COL; c++) 
      cout<<"\t "<<a[r][c]; 
    cout<<"\n"; 
  } 
} 
