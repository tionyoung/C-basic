/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void) {
	int x, y, sum, diff;
	int* p1 = &sum;
	int* p2 = &diff;
	printf("�� ���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);
	get_sum_diff(x, y, p1, p2);
	printf("�� ���� ���� %d�Դϴ�.", *p1);
	printf("�� ���� ���� %d�Դϴ�.", *p2);
	return 0;

}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {
	*p_sum = x + y;
	if (x >= y) {
		*p_diff = x - y;
	}
	else {
		*p_diff = y - x;
	}
}
*/
