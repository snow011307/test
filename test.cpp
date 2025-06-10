#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifdef MAIN1
int main(void) {
	printf("Hello World \n");

	int a;
	int b;

	printf("① 数字を入力してください：");
	scanf("%d", &a);
	printf("② 数字を入力してください：");
	scanf("%d", &b);
	printf("足し算：%d（a）+ %d（b）= %d \n", a, b, a+b);
	printf("引き算：%d（a）- %d（b）= %d \n", a, b, a - b);
	printf("掛け算：%d（a）* %d（b）= %d \n", a, b, a * b);
	if (a == 0 && b == 0) {
		printf("割り算：%d（a）/ %d（b）= （0/0は計算できません）", a, b);
	}
	else {
		printf("割り算：%d（a）/ %d（b）= %d", a, b, a / b);
	}
}
#endif