#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifdef MAIN1
int main(void) {
	printf("Hello World \n");

	int a;
	int b;

	printf("�@ ��������͂��Ă��������F");
	scanf("%d", &a);
	printf("�A ��������͂��Ă��������F");
	scanf("%d", &b);
	printf("�����Z�F%d�ia�j+ %d�ib�j= %d \n", a, b, a+b);
	printf("�����Z�F%d�ia�j- %d�ib�j= %d \n", a, b, a - b);
	printf("�|���Z�F%d�ia�j* %d�ib�j= %d \n", a, b, a * b);
	if (a == 0 && b == 0) {
		printf("����Z�F%d�ia�j/ %d�ib�j= �i0/0�͌v�Z�ł��܂���j", a, b);
	}
	else {
		printf("����Z�F%d�ia�j/ %d�ib�j= %d", a, b, a / b);
	}
}
#endif