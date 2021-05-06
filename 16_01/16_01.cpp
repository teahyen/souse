#include <vector>
#include <set>
#include <algorithm>
#include <time.h>
#include <iostream>
using namespace std;

void PrintElement(int  n)
{
  cout<<n<<"\t";
}

class LottoGenerator {
public:
  vector<int> ball;  

  LottoGenerator(int count)
  {
    makeRandom(count);
  }

  LottoGenerator() 
  {
    makeRandom(6);
  }

  set<int> RangedRandDemo( int range_min, int range_max, int n)
  {
    set <int> s;
    while(true)
    {
      int u = (double)rand() / (RAND_MAX + 1) * 
              (range_max - range_min)  + range_min;
      s.insert(u);
      if(s.size() >= n)
          break; 
    }
    return s;
  }

  void makeRandom(int count){
    set<int> s;  
    s=RangedRandDemo( 1, 46, count);

    set<int>::iterator iter;
    for(iter=s.begin(); iter!=s.end(); iter++)
      this->ball.push_back(*iter);
  }  
   
  void lottprn() {
    for_each(this->ball.begin(),this->ball.end(), PrintElement) ;
    cout <<endl;  
  }
};

class UserLotto {  
public:
  int pos;                
  LottoGenerator lotto;  
  int grade;              
  
  UserLotto()
  {
    grade=0;
  }
};

void line()
{
  cout<<"************************************************************************\n";
}

void title()
{     
  cout<<"�ζ� ���� ���ǽ��� ���α׷�\n";
  line();
  cout<<"1�� 6�� ���� ��ġ (���ʽ����� ����):�� ����� 1,800,000,000��\n";
  cout<<"2�� 6�� ���� �� 5�� ���� ��ġ+1�� ���ʽ� ���� ��ġ:";
  cout<<"�� ����� 100,000,000��\n";
  cout<<"3�� 5�� ���� ��ġ (���ʽ� ���� ����):�� ����� 30,000,000��\n";
  cout<<"4�� 4�� ���� ��ġ (���ʽ� ���� ����):�� ����� 12,000,000��\n";
  cout<<"5�� 3�� ���� ��ġ (���ʽ� ���� ����):10,000��\n";
  line();
}

void Lotto(UserLotto user) 
{
  switch(user.grade){
    case 1:
      cout<<"1��(�ѻ�� 1,800,000,000��):";
      break;
    case 2 :
      cout<<"2��(�ѻ��   100,000,000��):";
      break;
    case 3 :
      cout<<"3��(�ѻ��    30,000,000��):";
      break;
    case 4 :
      cout<<"4��(�ѻ��    12,000,000��):";
      break;    
    case 5 :
      cout<<"5��(�ѻ��        10,000��):";
      break;  
  }  
  if(user.grade>=1  && user.grade<=5){
    cout<<"\n  NO  "<<user.pos<<" : ";   
    user.lotto.lottprn();
  }
}

void counts(vector<UserLotto> user, LottoGenerator lotto) 
{
  int matchingcount; 
  vector<int>::iterator num1, num2;
  for(int i=0; i<user.size(); i++){
    matchingcount=0;            
    for(num1=lotto.ball.begin(); num1<lotto.ball.end()-1; num1++){             
      for(num2=user[i].lotto.ball.begin();num2<user[i].lotto.ball.end();num2++){     
        if(*num1 < *num2){
           break;
        }
        if(*num1 == *num2){      
          matchingcount++;          
        }      
      }
    }
  
    switch(matchingcount){
      case 3: 
          user[i].grade=5; 
          break;
      case 4: 
          user[i].grade=4; 
          break;
      case 5:
          {       
          user[i].grade=3;
          int bonus=*(lotto.ball.end()-1);
          vector<int>::iterator iter;
          iter = find(user[i].lotto.ball.begin(), user[i].lotto.ball.end(), bonus);
          if( iter != user[i].lotto.ball.end())
            user[i].grade=2; 
          }
          break;
      case 6: 
          user[i].grade=1; 
          break;
    default :
          user[i].grade=0; 
    }
    Lotto(user[i]);     
  }
}

void main()
{ 
  vector<UserLotto> user;   
  int userCount;
  int pos=1;
  int i;

  title();
  cout<<"�ζ� ���� �Է��ϼ���. : ";
  cin>>userCount;

  cout<<"������ ��ȣ \n";
  line(); 
  for(i=0; i<userCount; i++) {
    UserLotto uselotto;  
    uselotto.pos=i+1;
    cout<<"  NO  "<<uselotto.pos<<" : ";   
    uselotto.lotto.lottprn();
    user.push_back(uselotto);
  }
  
  LottoGenerator lotto(7);
  line();
  cout<<"��÷��ȣ : ";
  lotto.lottprn();
  cout<<"�� �� �� : "<<lotto.ball[6]<<endl;
  line();
  
  counts(user, lotto); 
}