/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	FILE* fp = NULL;
	int c;
	fp = fopen("sample.txt", "r");

	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	while ((c = fgetc(fp)) != EOF)
		printf("%c", c);
	fclose(fp);
	return 0;
}
*/