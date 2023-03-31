/*#include <stdio.h>
#define NUMBER 10
void array_copy(int* A, int* B, int size);
void array_print(int* A, int size);

int main(void)
{
	int data1[NUMBER] = { 1,2,3 }; //나머지 값은 다 0으로 채워짐
	int data2[NUMBER] = { 0 };

	array_print(data1, NUMBER);
	array_copy(data1, data2, NUMBER);
	array_print(data2, NUMBER);

	return 0;
	
}

void array_copy(int* A, int* B, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}

void array_print(int* A, int size)
{
	int i;
	printf("[ ");
	for (i = 0; i < size; i++) {
		printf("%d", A[i]);
	}
	printf(" ]");
}
*/