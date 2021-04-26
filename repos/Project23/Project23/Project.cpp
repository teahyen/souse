#include <iostream>
#include <string>
using namespace std;

void main()
{	//041007 3194618
	char Num1[14];
		printf("주민등록 번호 13자리를 입력해주세요. :");
			cin >> Num1;
			if (Num1[6] == '1'|| Num1[6] =='3')	//성별
				printf("성별: 남자\n");
			else
				printf("성별: 여자\n");


			if (Num1[6] == '1'|| Num1[6] == '2')		//나이
				cout <<"만"<< 2021-(1900 + 10 * (Num1[0]-'0') + (Num1[1]-'0'))<<"세";
			else
				cout << "만" << 2021-(2000 + 10 * (Num1[0]-'0') + (Num1[1]-'0')) << "세";

		if (Num1[6] == '1' || Num1[6] == '2')		//생년월일
			cout << "19" << Num1[0] << Num1[1] << "년";
		else
			cout << "20" << Num1[0] << Num1[1] << "년";

		if (Num1[2] == 0)
			cout << Num1[3] << "월";
		else
			cout << (Num1[2]-'0')*10 << Num1[3] << "월";

		if (Num1[4] == 0)
			cout << (Num1[4]-'0')*10 << Num1[5] << "일";
		else
			cout << Num1[5] << "일";
		printf("사는 곳:");
		
		if (10 * Num1[7] + Num1[8] >= 0 && 10 * Num1[7] + Num1[8] <= 8)
			printf("서울");
		else if (10 * Num1[7] + Num1[8] >= 9 && 10 * Num1[7] + Num1[8] <= 12)
			printf("부산");
		else if (10 * Num1[7] + Num1[8] >= 13 && 10 * Num1[7] + Num1[8] <= 15)
			printf("인천");
		else if (10 * Num1[7] + Num1[8] >= 16 && 10 * Num1[7] + Num1[8] <= 18)
			printf("경기도 주요 도시");
		else if (10 * Num1[7] + Num1[8] >= 19 && 10 * Num1[7] + Num1[8] <= 25)
			printf("그 밖의 경기도");
		else if (10 * Num1[7] + Num1[8] >= 26 && 10 * Num1[7] + Num1[8] <= 34)
			printf("강원도");
		else if (10 * Num1[7] + Num1[8] >= 35 && 10 * Num1[7] + Num1[8] <= 39)
			printf("충척북도");
		else if (10 * Num1[7] + Num1[8] >= 40 && 10 * Num1[7] + Num1[8] <= 47)
			printf("충청남도");
		else if (10 * Num1[7] + Num1[8] >= 48 && 10 * Num1[7] + Num1[8] <= 54)
			printf("전라북도");
		else if (10 * Num1[7] + Num1[8] >= 55 && 10 * Num1[7] + Num1[8] <= 66)
			printf("전라남도");
		else if (10 * Num1[7] + Num1[8] >= 67 && 10 * Num1[7] + Num1[8] <= 90)
			printf("경상도");
		else
		{
			printf("없는 주민등록 번호입니다.");
		}
		if (Num1[6] >= '4')
			printf("없는 주민등록번호입니다.");

}