/*
#include <stdio.h>

void set_min_ptr(int m[], int size, int** pmin);

int main(void) {
	int m[6] = { 5,6,1,3,7,9 };
	int* pmin;

	set_min_ptr(m, 6, &pmin);

	printf("가장 작은 값은 %d\n", *pmin);

	return 0;
}
void set_min_ptr(int m[], int size, int** pmin) {
	int i = 0;
	* pmin= &m[0];
	for (i = 0; i < size; i++) {
		if ((**pmin) > m[i]) {
			(*pmin) = &m[i];
		}
	}
}
*/