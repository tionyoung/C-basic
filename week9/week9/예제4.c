/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};

struct student get_max_stu(struct student ary[]);

int main(void) {
	struct student list[SIZE];
	int i;
	struct student best;
	printf("�л��� ������ �Է��ϼ���.\n");
	for (i = 0; i < SIZE; i++) {
		printf("[�л� %d]\n", i + 1);
		printf("�̸��� �Է��ϼ���:");
		scanf("%s", list[i].name);
		printf("�й��� �Է��ϼ���:");
		scanf("%d", &list[i].number);
		printf("������ �Է��ϼ���:");
		scanf("%lf", &list[i].grade);
	}
	best = get_max_stu(list);
	printf("<������ ���� ���� �л�>\n");
	printf("�̸�: %s\n�й�: %d\n����: %lf\n", best.name, best.number, best.grade);
}

struct student get_max_stu(struct student ary[]) {
	struct student s = ary[0];
	for (int i = 0; i < SIZE; i++) {
		if (s.grade <= ary[i].grade) {
			s = ary[i];
		}
	}
	return s;
}
*/