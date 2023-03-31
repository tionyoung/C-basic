/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int time, age, money;

	printf("현재시간 입력(0시~24시): ");
	scanf_s("%d", &time);
	printf("나이를 입력: ");
	scanf_s("%d", &age);

	if (time <= 17)
	{
		if (age < 3) //응애
			money = 0;
		else if (age > 12 && age < 65) // 대인
			money = 34000;
		else
			money = 25000;//소인
	}
	else
	{
		if (age < 3)
			money = 0;
		else
			money = 10000;
	}
	printf("요금은 %d원입니다.", money);
	return 0;
}
*/