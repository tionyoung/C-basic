/*
#include <stdio.h>

typedef struct employee {
	int num;
	char name[20];
	char phone[20];
	int age;
}EMP;

EMP list[10] = {
	{1, "ȫ1", "aaa", 22},
	{2, "ȫ2", "bbb", 2},
	{3, "ȫ3", "aaa", 2},
	{4, "ȫ4", "aaa", 2},
	{5, "ȫ5", "aaa", 3},
	{6, "ȫ6", "aaa", 33},
	{7, "ȫ7", "aaa", 60},
	{8, "ȫ8", "aaa", 2},
	{9, "ȫ9", "aaa", 33},
	{10, "ȫ10", "aaa", 45}
};
int main(void) {
	int i;
	int n=0;
	for (i = 0; i < 10; i++) {
		if (list[i].age <= 29 && list[i].age >= 20) {
			printf("�̸� =%s, ����=%d\n", list[i].name, list[i].age);
			n++;
		}
		}
	if (n == 0) {
		printf("�� �� ����");
	}
	return 0;
}
*/