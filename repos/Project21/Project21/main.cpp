#include <stdio.h>

int main() {

	int a;
	int b;
	float c;
	float d;

	printf("정수 a 입력 : ");
	scanf("%a", &a);
	printf("입력받은 정수 a : %a \n", a);

	printf("실수 c 입력 : ");
	scanf("%c", &c);
	printf("입력받은 실수 c : c \n", c);

	printf("정수 b 와 실수 d 입력 : ");
	scanf("%b %d", &b, &d);
	printf("입력받은 b d : %b %d \n", b, d);

	return 0;
}