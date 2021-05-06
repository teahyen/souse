#include<iostream>                                  
using namespace std;                                
class Shape                                         
{                                                   
protected :                                         
  double area;                                        
public:                                             
  virtual void Draw()=0;      // ���� �����Լ�             
  virtual double GetSize()=0; // ���� �����Լ�        
};                                                  
                                                    
class Rect : public Shape{                          
protected :                                         
  int width;                                          
  int height;                                         
public :                                            
  Rect(int w=0, int h=0);                             
  void Draw();      // �������̵�                          
  double GetSize(); // �������̵�                     
};                                                  
                                                    
Rect::Rect(int w, int h)                            
{                                                   
  width=w;                                            
  height=h;                                           
}                                                   
                                                    
void Rect::Draw() // �������̵�                     
{                                                   
  cout<<"�簢���� �׸���"<<endl;                      
}                                                   
                                                    
double Rect::GetSize() // �������̵�                
{                                                   
  area=width*height;                                  
  return area;                                        
}                                                   
                                                    
class Circle : public Shape{                        
protected :                                         
  int radius;                                         
public :                                            
  Circle(int r=0);                                    
  void Draw(); // �������̵�                          
  double GetSize(); // �������̵�                     
};                                                  
                                                    
Circle::Circle(int r)                               
{                                                   
  radius=r;                                           
}                                                   
void Circle::Draw()     // �������̵�                   
{                                                   
  cout<<"���� �׸���"<<endl;                          
}                                                   
                                                    
double Circle::GetSize() // �������̵�              
{                                                   
  area=radius*radius*3.14;                            
  return area;                                        
}                                                   
                                                    
void main()                                         
{                                                   
  Rect recObj(8, 10);                                 
  recObj.Draw();                                      
  cout<<"�簢���� ���� : "<<recObj.GetSize()<<endl;   
                                                    
  Circle cirObj(5);                                   
  cirObj.Draw();                                      
  cout<<"���� ���� : "<<cirObj.GetSize()<<endl;       
}                                                   