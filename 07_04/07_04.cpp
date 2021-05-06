#include <iostream> 
using namespace std; 
#define ROW 3 
#define COL 4 
void prn(int p[][4]); 
void main() 
{ 
  int a[ROW][COL] = { {90, 85, 95, 100}, 
                      {75, 95, 80, 90}, 
                      {90, 80, 70, 60} 
                     }; 
  cout<<"main sizeof(a) = "<<sizeof(a)<<"\n"; 
  prn(a); 
} 
void prn(int p[][4]) 
{ 
  int r, c; 
  for(r=0; r<ROW; r++) { 
     for(c=0; c<COL; c++) {
      cout<<"a["<< r << "]["<<c<<"] : " <<p[r][c]<<"\t"; 
     }
    cout<<"\n"; 
  } 
  cout<<"prn sizeof(p) = "<<sizeof(p)<<"\n"; 
} 
