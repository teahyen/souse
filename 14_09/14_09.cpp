#include <iostream>                           
using namespace std;       
 //����� ���� ���� Ŭ����(UserError) ���� 
 class UserError 
 {
    public : 
          void func();
 };
 void UserError::func()
 {
   cout<<"����� ���� ����"<<endl;
 } 
 void main( ) 
 {
    try{
      throw UserError();
    }catch(UserError &ex){
      cout<<"����� ���� ���� �߻��� ���� ó��"<<endl;      
      ex.func();
    }
 }