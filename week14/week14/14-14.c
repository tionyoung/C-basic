/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("�׸��� ������ ��Դϱ�? ");
	scanf("%d", &i);

	int* list = (int*)malloc(sizeof(int) * i);
	for (int k = 0; k < i; k++) {
		printf("�׸�<����>�� �Է��Ͻÿ�: ");
		scanf("%d", &list[k]);
	}
	printf("�Էµ� ���� ������ �����ϴ�:\n");
	for (int k = 0; k < i; k++) {
		printf("%d ", list[k]);
	}
	free(list);
	return 0;
}
*/