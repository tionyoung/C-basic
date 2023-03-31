/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("학생의 수: ");
	scanf("%d", &i);
	int* list;
	list = (int*)malloc(sizeof(int) * i);

	if (list == NULL) {
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (int k = 0; k < i; k++) {
		printf("학생#%d 성적: ", k+1);
		scanf("%d", &list[k]);
	}

	printf("=========================\n");
	for (int k = 0; k < i; k++) {
		printf("학생#%d 성적: %d", k+1, list[k]);
	}
	printf("=========================\n");
	free(list);
	return 0;
}
*/