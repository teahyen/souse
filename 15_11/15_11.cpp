#include <set>
#include <string>
#include <iostream>
using namespace std;
 
void main()
{
  set<int> intSet;
  set<int>::iterator IterPos;
 
  intSet.insert(90);
  intSet.insert(95);
  intSet.insert(100);
  intSet.insert(60);
  intSet.insert(60);
  intSet.insert(95);
  intSet.insert(85);

  cout <<"�� ���� : "<<intSet.size() <<endl;
  
  for(IterPos = intSet.begin(); IterPos != intSet.end(); ++IterPos){
    cout << *IterPos <<"  ";
  }
  cout << endl;
  
  set<int>::iterator EraseIter = intSet.find(70);
 
  if (EraseIter != intSet.end()) {    
    intSet.erase(EraseIter);
  }
  cout <<" >> 70�� ���� �� ��� ��� ���  << " << endl;
  for(IterPos = intSet.begin(); IterPos != intSet.end(); ++IterPos){
      cout << *IterPos <<"  ";
  }
  cout << endl;

  cout <<" >> 95�� �˻� �Ͽ� 70�� ������ �� ��� ��� ��� << " << endl;
  set<int>::iterator FindIter = intSet.find(95);
  if(FindIter != intSet.end())
  {
    //*FindIter = 100;
    intSet.erase(FindIter);
    intSet.insert(70);
  }
  for(IterPos = intSet.begin(); IterPos != intSet.end(); ++IterPos){
    cout << *IterPos <<"  ";
  }
  cout << endl;
}