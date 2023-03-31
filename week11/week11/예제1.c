/*
#include <stdio.h>
#include <stdlib.h>

int values[] = { 98,23,99,37,16 };

int compare(const void* a, const void* b) {
	return (*(int*)a) - (*(int*)b);
}
int main(void) {
	qsort(values, 5, sizeof(int), compare);
	printf("[");
	for (int i = 0; i < 5; i++) {
		printf("%d ", values[i]);
	}
	printf("]");
}
*/