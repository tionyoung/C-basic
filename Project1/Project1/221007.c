#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x=0;
	int y=0;
	int sum=0;

	printf("ù��° ���ڸ� �Է��ϼ���:");
	scanf("%d", &x);

	printf("�ι�° ���ڸ� �Է��ϼ���:");
	scanf("%d", &y);

	sum = x + y;
	printf("�� ���� ��: %d", sum);

	return 0;
}