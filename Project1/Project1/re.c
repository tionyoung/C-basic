#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x;
	int y;
	int sum;

	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��ϼ���:");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�� ���� ��: %d", sum);

	return 0;
}