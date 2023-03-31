/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("정수의 개수 N을 입력하시오: ");
	scanf("%d", &i);
	int* list;
	list = (int*)malloc(sizeof(int) * i);
	int k = 0;
	for (k = 0; k < i; k++) {
		int r = rand() % 101;
		list[k] = r;
	}

	int x;
	printf("정수 X를 입력하시오: ");
	scanf("%d", &x);

	printf("랜덤한 배열: ");
	for (k = 0; k < i; k++) {
		printf("%d ", list[k]);
	}
	printf("\n");

	printf("50보다 작은 수 = ");
	for (k = 0; k < i; k++) {
		if (x > list[k]) {
			printf("%d ", list[k]);
		}
	}
	free(list);
	return 0;
}
*/