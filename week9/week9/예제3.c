/*
#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
 };

struct student list[] = {
	{202101, "ȫ", 4.2},
	{202102, "��", 3.2},
	{202103, "��", 3.9}
};

int main(void) {
	struct student best = list[0];
	for (int i = 0; i < 3; i++) {
		if ( best.grade <= list[i].grade) {
			best = list[i];
		}
		
	}
	printf("<������ ���� ���� �л�>\n");
	printf("�̸�: %s\n�й�: %d\n����: %lf\n", best.name, best.number, best.grade);
}
*/