/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("�л��� ��: ");
	scanf("%d", &i);
	int* list;
	list = (int*)malloc(sizeof(int) * i);

	if (list == NULL) {
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (int k = 0; k < i; k++) {
		printf("�л�#%d ����: ", k+1);
		scanf("%d", &list[k]);
	}

	printf("=========================\n");
	for (int k = 0; k < i; k++) {
		printf("�л�#%d ����: %d", k+1, list[k]);
	}
	printf("=========================\n");
	free(list);
	return 0;
}
*/