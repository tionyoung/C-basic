/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct employee {
	int num;
	char name[10];
	int phone[10];
	int age;
}EMP;
int main(void) {
	EMP e[3];
	for (int i = 0; i < 3; i++) {
		printf("이름=");
		scanf("%s", e[i].name);
		printf("나이=");
		scanf("%d", &e[i].age);
	}
	for (int i = 0; i < 3; i++) {
		if ((e[i].age <= 30) && (e[i].age >= 20)) {
			printf("%s %d\n", e[i].name, e[i].age);
		}
	}
}
*/