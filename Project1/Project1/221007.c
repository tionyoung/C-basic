#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int x=0;
	int y=0;
	int sum=0;

	printf("첫번째 숫자를 입력하세요:");
	scanf("%d", &x);

	printf("두번째 숫자를 입력하세요:");
	scanf("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d", sum);

	return 0;
}