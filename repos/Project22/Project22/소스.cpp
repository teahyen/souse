#include <stdio.h>

typedef struct {
	char name;
	double arr[2];
}Ctest;

int main() {
	double a;
	double sum;
	Ctest t[2];
	for (int i = 0; i < 3; i++) {
		scanf("%s ", &t[i].name);
		scanf("%f ", &t[i].arr[0]);
		scanf("%f ", &t[i].arr[1]);
		scanf("%f", &t[i].arr[2]);
	}
	sum = (t[1].arr[0] + t[1].arr[1] + t[1].arr[2]);
	a = sum / 3.0;
	for (int y = 0; y < 3; y++) {
		printf("%s,%f.1 /n", t[y].name, t[y], a);
	}
	return 0;
}