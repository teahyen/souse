#include<vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std; 

//성적 저장을 위한 클래스 정의
class Student {
private:
  int no;                     //학번    
  char name[256];            //이름 
  int kor, eng, math;         //국어, 영어, 수학 점수  
  int total;                   //총점
  double avg;                //평균 
  char level;                  //학점 
  int  grade;                 //등수       

public :
  Student(int no, char * name, int kor, int math, int eng);
  Student(char * name);
  Student();
  void calculate() ;
  friend ostream &operator<<(ostream &os, const Student &stu); 
  friend void PrintElement(Student stu) ;  
  bool operator==(const char * key) const;
  void getStudent();
};

Student::Student(int no,  char * name, int kor, int math, int eng)
{
  this->no=no;
  strcpy(this->name, name);
  this->kor=kor;
  this->math=math;
  this->eng=eng;   
  calculate();   
}

Student::Student(char * name)
{
  strcpy(this->name, name);
}

Student::Student() 
{
  calculate();
}

void Student::calculate() 
{
  total = kor + eng + math;
  avg = total / 3.0;
  switch(int(avg)/10){
     case 10: 
     case 9:   level ='A';   break;
     case 8:   level ='B';   break;
     case 7:   level ='C';   break;
     case 6:   level ='D';   break;
     default : level ='F';
  } 
  grade=1;
}

ostream &operator<<(ostream &os, const Student &stu) 
{ 
  os<<setw(4)<<stu.no<<setw(10)<<stu.name<<setw(8)<<stu.kor
	 <<setw(7)<<stu.eng<<setw(7)<<stu.math<<setw(9)<<stu.total
	 <<setw(9)<<setprecision(2)<<stu.avg<<setw(7)<<stu.level
	 <<setw(7)<<stu.grade;
  return os; 
} 

bool Student::operator==(const char * key) const
{
  return strcmp(name, key)==0;
}

void Student::getStudent()
{ 
  cout<<"\n 학번을 입력하시오. >> "; 
  cin>>no;
  cout<<" 이름을 입력하시오. >> "; 
  cin>>name;
  cout<<" 국어점수를 입력하시오. >> "; 
  cin>>kor;
  cout<<" 영어점수를 입력하시오. >> "; 
  cin>>eng;
  cout<<" 수학점수를 입력하시오. >> "; 
  cin>>math;  
  fflush(stdin); 
  calculate();     //총점, 평균, 학점을 구함 
}

void PrintElement(Student stu) 
{
  cout<<stu<<endl; 
}

void title()   
{
  printf("학번  이름  국어  영어  수학  총점  평균  학점  등수 \n");
  printf("-------------------------------------------------------------------------- \n");
}

char *smenu[] = {  "1.입력", "2.삭제", "3.검색", 
                         "4.출력", "5.로드", "6.저장", "7.종료"};

char select_menu(void) 
{
  char ch; 
  int i;
  cout<<"\n***********************************************************\n";
  for(i=0; i<sizeof(smenu)/sizeof(smenu[0]); i++){ 
    cout<<setw(10)<<smenu[i];    //메뉴 출력
  }
  do{
    printf("\n메뉴 선택(1~7) >> "); 
    cin.get(ch);   
    fflush(stdin);   
  }while(ch<'1' || ch>'7');
  return ch;                     
} 

class StudentManager{
public:
  vector<Student> v;

  void Input() //입력 함수 만들기
  {  
    cout<<"\n >> 데이터 입력 작업 <<"; 
    Student temp;      
    temp.getStudent(); 
    v.push_back(temp);  
  }

  void Display()
  {
    cout<<"\n >> 전체 학생 정보 출력 <<\n";
    title();
    for_each(v.begin(), v.end(), PrintElement) ;
  }

  void Delete() 
  {
    char searchName[256];    
 
    cout<<"\n >> 데이터 삭제 작업 <<";
    cout<<"\n삭제하고자 하는 사람의 이름을 입력하시오. >> "; 
    cin>>searchName;         
    fflush(stdin);
    
    vector<Student>::iterator EraseIter = find(v.begin(), v.end(), searchName); 

    if (EraseIter != v.end()) {    
      cout<<"삭제 대상 :"<<endl;
      title();
      cout<<*EraseIter<<endl;
      v.erase(EraseIter);
      cout<<"성공적으로 삭제되었습니다. "<<endl;
      this->Display();
    }else{
      cout<<searchName<<"님이 존재하지 않습니다. "<<endl;
    }
  }  
  
  void Search()
  {
    char searchName[256];    
 
    cout<<"\n >> 데이터 검색 작업 <<";
    cout<<"\n찾고자 하는 사람의 이름을 입력하시오. >> "; 

    cin>>searchName;       
    fflush(stdin);
    
    vector<Student>::iterator FindIter = find(v.begin(), v.end(), searchName); 

    if (FindIter != v.end()) {    
      cout<<"검색 대상 :" <<endl;
      title();
      cout<<*FindIter<<endl;
    }else{
      cout<<searchName<<"님이 존재하지 않습니다. "<<endl;
    }
  }
  
  void delete_all()  
  {
    for(int i=v.size()-1; i>=0; i--){
       v.erase(v.begin()+i);
    }
  }

  void Exit()
  {
    printf("\n >> 작업 종료<<\n");  
    delete_all();
  }

  void Load()
  {
    delete_all();
     
    ifstream fin; 
    fin.open("r.txt"); 
     
    Student temp; 

    while(fin.read((char *)&temp, sizeof(temp))) {       
	  v.push_back(temp); 
    }
     fin.close();
  }

  void Save()
  {
    ofstream fout; 
    fout.open("r.txt"); 

    vector<Student>::iterator iter;

    for(iter=v.begin(); iter!=v.end(); iter++)     {
      Student temp=*iter;
      fout.write((char *)&temp, sizeof(temp));
    }
    fout.close();
  }
};

void main()
{
  StudentManager sm;    
  sm.Load();

  char ch;   
  cout<<"    성적 관리 프로그램";     
  while(1) { 
    ch=select_menu(); 
    switch(ch){        
      case '1':   sm.Input();    break;
      case '2':   sm.Delete();   break;
      case '3':   sm.Search();   break;
      case '4':   sm.Display();  break;
      case '5':   sm.Load();     break;
      case '6':   sm.Save();     break;
      case '7':   sm.Exit();     exit(0);
    }
  }
}