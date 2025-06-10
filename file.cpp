#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char moji[100];
	printf("> 文字を入力してください：");
	scanf("%s", moji);

	FILE* fp = fopen("data.txt", "w");
	if (fp == NULL) {
		printf("ファイルを開けませんでした。");
		return -1;
	}
	fprintf(fp, moji);
	fclose(fp);

	printf("ファイルに書き込みました。");

}