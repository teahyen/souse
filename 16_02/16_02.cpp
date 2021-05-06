#include<vector>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std; 

//���� ������ ���� Ŭ���� ����
class Student {
private:
  int no;                     //�й�    
  char name[256];            //�̸� 
  int kor, eng, math;         //����, ����, ���� ����  
  int total;                   //����
  double avg;                //��� 
  char level;                  //���� 
  int  grade;                 //���       

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
  cout<<"\n �й��� �Է��Ͻÿ�. >> "; 
  cin>>no;
  cout<<" �̸��� �Է��Ͻÿ�. >> "; 
  cin>>name;
  cout<<" ���������� �Է��Ͻÿ�. >> "; 
  cin>>kor;
  cout<<" ���������� �Է��Ͻÿ�. >> "; 
  cin>>eng;
  cout<<" ���������� �Է��Ͻÿ�. >> "; 
  cin>>math;  
  fflush(stdin); 
  calculate();     //����, ���, ������ ���� 
}

void PrintElement(Student stu) 
{
  cout<<stu<<endl; 
}

void title()   
{
  printf("�й�  �̸�  ����  ����  ����  ����  ���  ����  ��� \n");
  printf("-------------------------------------------------------------------------- \n");
}

char *smenu[] = {  "1.�Է�", "2.����", "3.�˻�", 
                         "4.���", "5.�ε�", "6.����", "7.����"};

char select_menu(void) 
{
  char ch; 
  int i;
  cout<<"\n***********************************************************\n";
  for(i=0; i<sizeof(smenu)/sizeof(smenu[0]); i++){ 
    cout<<setw(10)<<smenu[i];    //�޴� ���
  }
  do{
    printf("\n�޴� ����(1~7) >> "); 
    cin.get(ch);   
    fflush(stdin);   
  }while(ch<'1' || ch>'7');
  return ch;                     
} 

class StudentManager{
public:
  vector<Student> v;

  void Input() //�Է� �Լ� �����
  {  
    cout<<"\n >> ������ �Է� �۾� <<"; 
    Student temp;      
    temp.getStudent(); 
    v.push_back(temp);  
  }

  void Display()
  {
    cout<<"\n >> ��ü �л� ���� ��� <<\n";
    title();
    for_each(v.begin(), v.end(), PrintElement) ;
  }

  void Delete() 
  {
    char searchName[256];    
 
    cout<<"\n >> ������ ���� �۾� <<";
    cout<<"\n�����ϰ��� �ϴ� ����� �̸��� �Է��Ͻÿ�. >> "; 
    cin>>searchName;         
    fflush(stdin);
    
    vector<Student>::iterator EraseIter = find(v.begin(), v.end(), searchName); 

    if (EraseIter != v.end()) {    
      cout<<"���� ��� :"<<endl;
      title();
      cout<<*EraseIter<<endl;
      v.erase(EraseIter);
      cout<<"���������� �����Ǿ����ϴ�. "<<endl;
      this->Display();
    }else{
      cout<<searchName<<"���� �������� �ʽ��ϴ�. "<<endl;
    }
  }  
  
  void Search()
  {
    char searchName[256];    
 
    cout<<"\n >> ������ �˻� �۾� <<";
    cout<<"\nã���� �ϴ� ����� �̸��� �Է��Ͻÿ�. >> "; 

    cin>>searchName;       
    fflush(stdin);
    
    vector<Student>::iterator FindIter = find(v.begin(), v.end(), searchName); 

    if (FindIter != v.end()) {    
      cout<<"�˻� ��� :" <<endl;
      title();
      cout<<*FindIter<<endl;
    }else{
      cout<<searchName<<"���� �������� �ʽ��ϴ�. "<<endl;
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
    printf("\n >> �۾� ����<<\n");  
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
  cout<<"    ���� ���� ���α׷�";     
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