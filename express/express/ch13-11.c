/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct student {
	char name[10];
	char hnum[10];
	char cnum[10];
}STUDENT;

int main(void) {
	STUDENT ary[3];
	char src[10];
	for (int i = 0; i < 3; i++) {
		printf("�̸��� �Է�: ");
		scanf("%s", ary[i].name);
		printf("����ȭ��ȣ: ");
		scanf("%s", ary[i].hnum);
		printf("�޴�����ȣ: ");
		scanf("%s", ary[i].cnum);
	}

	printf("�˻��� �̸�: ");
	scanf("%s", src);
	for (int i = 0; i < 3; i++) {
		if (strcmp(src, ary[i].name) == 0) {
			printf("����ȭ��ȣ: %s\n", ary[i].hnum);
			printf("�޴�����ȣ: %s", ary[i].cnum);
		}
	}
	return 0;
}
*/