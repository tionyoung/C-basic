/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("항목의 개수는 몇개입니까? ");
	scanf("%d", &i);

	int* list = (int*)malloc(sizeof(int) * i);
	for (int k = 0; k < i; k++) {
		printf("항목<정수>을 입력하시오: ");
		scanf("%d", &list[k]);
	}
	printf("입력된 값은 다음과 같습니다:\n");
	for (int k = 0; k < i; k++) {
		printf("%d ", list[k]);
	}
	free(list);
	return 0;
}
*/