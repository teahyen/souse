#include <iostream>
#include <string>
using namespace std;

void main()
{	//041007 3194618
	char Num1[14];
		printf("�ֹε�� ��ȣ 13�ڸ��� �Է����ּ���. :");
			cin >> Num1;
			if (Num1[6] == '1'|| Num1[6] =='3')	//����
				printf("����: ����\n");
			else
				printf("����: ����\n");


			if (Num1[6] == '1'|| Num1[6] == '2')		//����
				cout <<"��"<< 2021-(1900 + 10 * (Num1[0]-'0') + (Num1[1]-'0'))<<"��";
			else
				cout << "��" << 2021-(2000 + 10 * (Num1[0]-'0') + (Num1[1]-'0')) << "��";

		if (Num1[6] == '1' || Num1[6] == '2')		//�������
			cout << "19" << Num1[0] << Num1[1] << "��";
		else
			cout << "20" << Num1[0] << Num1[1] << "��";

		if (Num1[2] == 0)
			cout << Num1[3] << "��";
		else
			cout << (Num1[2]-'0')*10 << Num1[3] << "��";

		if (Num1[4] == 0)
			cout << (Num1[4]-'0')*10 << Num1[5] << "��";
		else
			cout << Num1[5] << "��";
		printf("��� ��:");
		
		if (10 * Num1[7] + Num1[8] >= 0 && 10 * Num1[7] + Num1[8] <= 8)
			printf("����");
		else if (10 * Num1[7] + Num1[8] >= 9 && 10 * Num1[7] + Num1[8] <= 12)
			printf("�λ�");
		else if (10 * Num1[7] + Num1[8] >= 13 && 10 * Num1[7] + Num1[8] <= 15)
			printf("��õ");
		else if (10 * Num1[7] + Num1[8] >= 16 && 10 * Num1[7] + Num1[8] <= 18)
			printf("��⵵ �ֿ� ����");
		else if (10 * Num1[7] + Num1[8] >= 19 && 10 * Num1[7] + Num1[8] <= 25)
			printf("�� ���� ��⵵");
		else if (10 * Num1[7] + Num1[8] >= 26 && 10 * Num1[7] + Num1[8] <= 34)
			printf("������");
		else if (10 * Num1[7] + Num1[8] >= 35 && 10 * Num1[7] + Num1[8] <= 39)
			printf("��ô�ϵ�");
		else if (10 * Num1[7] + Num1[8] >= 40 && 10 * Num1[7] + Num1[8] <= 47)
			printf("��û����");
		else if (10 * Num1[7] + Num1[8] >= 48 && 10 * Num1[7] + Num1[8] <= 54)
			printf("����ϵ�");
		else if (10 * Num1[7] + Num1[8] >= 55 && 10 * Num1[7] + Num1[8] <= 66)
			printf("���󳲵�");
		else if (10 * Num1[7] + Num1[8] >= 67 && 10 * Num1[7] + Num1[8] <= 90)
			printf("���");
		else
		{
			printf("���� �ֹε�� ��ȣ�Դϴ�.");
		}
		if (Num1[6] >= '4')
			printf("���� �ֹε�Ϲ�ȣ�Դϴ�.");

}