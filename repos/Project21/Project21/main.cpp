#include <stdio.h>

int main() {

	int a;
	int b;
	float c;
	float d;

	printf("���� a �Է� : ");
	scanf("%a", &a);
	printf("�Է¹��� ���� a : %a \n", a);

	printf("�Ǽ� c �Է� : ");
	scanf("%c", &c);
	printf("�Է¹��� �Ǽ� c : c \n", c);

	printf("���� b �� �Ǽ� d �Է� : ");
	scanf("%b %d", &b, &d);
	printf("�Է¹��� b d : %b %d \n", b, d);

	return 0;
}