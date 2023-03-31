
#include <stdio.h>

void array_copy(int src[3][3], int dst[3][3]);

int main(void) {
	int src[3][3] = { 100, 30, 67, 89, 50, 12, 19, 60, 90 };
	int dst[3][3];
	int i, k;
	printf("<원본 2차원 배열>\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d ", src[i][k]);
		}
		printf("\n");
	}
	array_copy(src, dst);
	printf("<복사본 2차원 배열>\n");
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			printf("%d ", dst[i][k]);
		}
		printf("\n");
	}
}

void array_copy(int src[3][3], int dst[3][3]) {
	int i, k;
	int* p1 ;
	int* p2 ;
	for (i = 0; i < 3; i++) {
		for (k = 0; k < 3; k++) {
			p1 = &src[i][k];
			p2 = &dst[i][k];
			*p2 = *p1;
		}
	}
}
