/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char first[30];
	char last[30];
	int i = 0;
	printf("ù ��° ���ڿ��� �Է��Ͻÿ�: ");
	gets(first, 30);
	printf("�� ��° ���ڿ��� �Է��Ͻÿ�: ");
	gets(last, 30);

	int z = 0;
	while (first[z] != '/0') {
		z++;
	}
	int y = 0;
	while (last[y] != '/0') {
		y++;
	}

	int x;
	if (z >= y) {
		x=
	}
	while (1) {
		if ((first[i] == NULL) && (last[i] == NULL)) {
			break;
		}
		if ((strcmp(first[i], last[i])) == 0)
			printf("O");
		else
			printf("X");

		i++;
	}

	return 0;
}
*/