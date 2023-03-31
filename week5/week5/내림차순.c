/*#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int list[10] = { 0 };
	srand((unsigned)time(NULL));
	int i, j;
	int max;
	int temp, number;
	printf("원래의 배열: ");
	for (i = 0; i < 10; i++)
		list[i] = rand() % 100 + 1;
	for (i = 0; i < 10; i++)
		printf("%d ", list[i]);
	printf("\n내림차순으로 정렬된 배열: ");
	max = list[0];
	for (i = 0; i < 9; i++) //list[0]
	{
		for (j = i + 1; j < 10; j++) //list[1~9]
			if (list[j] <= max)
			{
				max = list[j];
				number = j;
			}
		temp = list[i];
		list[i] = list[number];
		list[number] = temp;
	}
	for (i = 9; i > 0; i--)
		printf("%d ", list[i]);
	return 0;
}*/