#include <iostream>                           
using namespace std;    
class UserError {
 public :
   //전달인자를 문자열로 갖는 생성자의 원형 정의
   UserError(char * message); 
    //전달인자 없는 디폴트 생성자 정의
   UserError( ) {  }         
 };
 //전달인자를 문자열로 갖는 생성자 
 UserError::UserError(char * message) 
 {
    cout<<message<<endl;
 }

 class Human{
    char name[20];
    int age;
 public:
    Human(char *name, int age);
    void setName(char *name);
    void setAge(int age);
    void prn( );
 };

 Human::Human(char *name, int age) 
 {
    setName(name);
    setAge(age);
    prn();
 }

 void Human::setName(char *name) 
 {    //이름이 2자이하거나 8자이상이면
    if(!(strlen(name)>=2 && strlen(name)<=8))
      //사용자가 Exception 예외를 발생시킴
      throw UserError("이름은 2자이상 8자이하로만 기술하세요.");     
    strcpy(this->name, name);
 }

 void Human::setAge(int age)
 { 
    //나이가 0부터 120사이가 아니면 UserError 예외 발생
    if(!(age>=0 && age<=120))
      throw UserError("나이는 0부터 120사이여야 합니다."); 
    this->age=age;
 }

 void Human::prn( )
 {
    cout<<"name : "<<name<<"\t age : "<<age<<endl;
 }

 void main( ) {
   Human *p1, *p2, *p3;
   try{
     p1=new Human("전혜빈", 20);  
   } catch(UserError a){
     cout<<"UserError 예외처리  구문"<<endl;
   }  
   try{
     p2=new Human("안젤리나졸리", 10);   
   }catch(UserError a){
     cout<<"UserError 예외처리 구문"<<endl;
   }  
   try{
     p3=new Human("고은아", 220);    
   }catch(UserError a){
     cout<<"UserError 예외처리 구문"<<endl;
   }  
 }