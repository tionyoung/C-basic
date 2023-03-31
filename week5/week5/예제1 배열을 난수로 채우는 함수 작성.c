
#include <stdio.h>
#include <stdlib.h>

void array_fill(int* A, int size);
void array_print(int* A, int size);

int main(void)
{
	int data[10];

	array_fill(data, 10);
	array_print(data, 10);

}

void array_fill(int* A, int size)
{
	int i;
	srand((unsigned)time(NULL));
	for (i = 0; i < size; i++) {
		A[i] = rand();
	}
}

void array_print(int* A, int size)
{
	int i;
	printf("[ ");
	for (i = 0; i < size; i++) {
		printf(" % d", A[i]);
		printf(",");
	}
	printf(" ]");
}
