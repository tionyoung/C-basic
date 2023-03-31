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
		printf("이름을 입력: ");
		scanf("%s", ary[i].name);
		printf("집전화번호: ");
		scanf("%s", ary[i].hnum);
		printf("휴대폰번호: ");
		scanf("%s", ary[i].cnum);
	}

	printf("검색할 이름: ");
	scanf("%s", src);
	for (int i = 0; i < 3; i++) {
		if (strcmp(src, ary[i].name) == 0) {
			printf("집전화번호: %s\n", ary[i].hnum);
			printf("휴대폰번호: %s", ary[i].cnum);
		}
	}
	return 0;
}
*/