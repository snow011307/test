#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char moji[100];
	printf("> ��������͂��Ă��������F");
	scanf("%s", moji);

	FILE* fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("�t�@�C�����J���܂���ł����B");
		return -1;
	}
	fprintf(fp, moji);
	fclose(fp);

	printf("�t�@�C���ɏ������݂܂����B");

}