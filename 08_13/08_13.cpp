#include <iostream> 
using namespace std; 
//������ COLOR�� ������
enum COLOR { RED=-1, GREEN, BLUE=35, WHITE, BLACK=2 };
void main( )
{
   enum COLOR  test; //������ ���� test�� ������  
      
   cout<<" RED    = "<< RED<<"\n";
   cout<<" GREEN  = "<< GREEN<<"\n";
   cout<<" BLUE   = "<< BLUE<<" \n";
   cout<<" WHITE  = "<<WHITE <<" \n";
   cout<<" BLACK  = "<< BLACK<<" \n";

   //������ ���� test�� {}���� ��� ���� �ϳ��� BLUE�� ����
   test = BLUE;   
   cout<<" test   = "<<test <<"\n\n";//test�� ������ 35�� ���ǵǾ� ���� 
  
   switch(test){
   case RED   : 
	   cout<<" ������ ����\n"; 
	   break;
   case GREEN : 
	   cout<<" �ʷϻ� ����\n"; 
	   break;
   case BLUE  : 
	   cout<<" �Ķ��� ����\n"; 
	   break;
   case WHITE : 
	   cout<<" �Ͼ�� ����\n"; 
	   break;
   case BLACK : 
	   cout<<" ������ ����\n"; 
	   break;
   }
}