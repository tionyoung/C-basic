/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("������ ���� N�� �Է��Ͻÿ�: ");
	scanf("%d", &i);
	int* list;
	list = (int*)malloc(sizeof(int) * i);
	int k = 0;
	for (k = 0; k < i; k++) {
		int r = rand() % 101;
		list[k] = r;
	}

	int x;
	printf("���� X�� �Է��Ͻÿ�: ");
	scanf("%d", &x);

	printf("������ �迭: ");
	for (k = 0; k < i; k++) {
		printf("%d ", list[k]);
	}
	printf("\n");

	printf("50���� ���� �� = ");
	for (k = 0; k < i; k++) {
		if (x > list[k]) {
			printf("%d ", list[k]);
		}
	}
	free(list);
	return 0;
}
*/