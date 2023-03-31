
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* list;
	list = (int*)malloc(sizeof(int) * 1000);
	if (list == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}
	for (int i = 0; i < 1000; i++) {
		list[i] = rand();
	}
	int max = list[0];
	for (int i = 1; i < 1000; i++) {
		if (list[i] > max) {
			max = list[i];
		}
	}

	printf("최대값=%d", max);
	free(list);
	return 0;
}
