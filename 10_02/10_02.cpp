#include <iostream> 
using namespace std; 
class Complex 
{ 
  private : 
    int real; 
    int image; 
  public : 
    void SetComplex(); 
    void ShowComplex(); 
}; 
void Complex::SetComplex() 
{ 
  real=2; 
  image=5; 
} 
void Complex::ShowComplex() 
{ 
  cout<<"( " <<real <<" + " <<image << "i )" <<endl ; 
} 
void main() 
{ 
  Complex x; 
  x.real = 5 ;   // 컴파일 에러 
  x.image = 10; // 컴파일 에러 
  x.ShowComplex(); 
} 