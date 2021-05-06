#include <iostream> 
using namespace std; 
class Complex 
{ 
private : 
  int real; 
  int image; 
public : 
  Complex(int r=0, int i=0); 
  void ShowComplex(); 
  Complex operator+(Complex rightHand); 
  Complex operator-(const Complex &rightHand) const; 
  Complex operator-() const; 
  }; 
 
void Complex::ShowComplex() 
{ 
  if(image>0) 
    cout<<"(" <<real <<"+" <<image << "i)" <<endl ; 
  else if(image<0) 
    cout<<"(" <<real << image << "i)" <<endl ; 
  else 
    cout<<real<<endl ; 
} 
 
Complex::Complex( int r, int i) 
{ 
  real=r; 
  image=i; 
} 
 
Complex Complex::operator+(Complex rightHand) 
{ 
  Complex res; 
  res.real = this->real + rightHand.real; 
  res.image = this->image + rightHand.image; 
  return res; 
} 
 
Complex Complex::operator-(const Complex &rightHand) const 
{ 
  Complex res; 
  res.real = this->real - rightHand.real; 
  res.image = this->image - rightHand.image; 
  return res; 
} 
 
Complex Complex::operator-() const 
{ 
  Complex res; 
  res.real = -real ; 
  res.image = -image ; 
  return res; 
} 
 
void main() 
{ 
  Complex x(10,20), y(20, 40), z; 
 
  cout<<"-- µÎ Complex °´Ã¼¿¡ ´ëÇÑ µ¡¼À --\n"; 
  z = x + y; 
  x.ShowComplex(); 
  y.ShowComplex(); 
  z.ShowComplex(); 
  
  cout<<"\n-- µÎ Complex °´Ã¼¿¡ ´ëÇÑ »¬¼À --\n"; 
  z = x - y; 
  x.ShowComplex(); 
  y.ShowComplex(); 
  z.ShowComplex(); 
  
  cout<<"\n-- Complex °´Ã¼ÀÇ ºÎÈ£ º¯°æ --\n"; 
  z=-x; 
  x.ShowComplex(); 
  z.ShowComplex(); 
} 