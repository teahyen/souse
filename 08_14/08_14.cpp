#include <iostream> 
using namespace std; 
//���� ������ ���� ����ü(���ø�) ���� 
struct sungjuck{
  char no[8]; char name[16];   //�й��� �̸� 
  int kor, eng, mat, tot;      //����, ���� ���� ����, ����
  double ave;                  //��� 
  char level;                  //���� 
  int grade;                   //���  
};  

typedef struct sungjuck SJ;

void main()
{
  SJ s={"2001029", "������", 85, 90, 95};

  cout<<" �й� \t�̸� \t���� \t���� \t���� \n";
  cout<<"------------------------------------------------------ \n";
  cout<<s.no<<"\t"<<s.name<<"\t"<<s.kor<<"\t"<<s.eng<<"\t"<< s.mat<<"\n";
}