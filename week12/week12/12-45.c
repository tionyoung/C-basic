/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt", "r");

	if (fp == NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);
	fclose(fp);
	return 0;
}
*/