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
	printf("학생의 정보를 입력하세요.\n");
	for (i = 0; i < SIZE; i++) {
		printf("[학생 %d]\n", i + 1);
		printf("이름을 입력하세요:");
		scanf("%s", list[i].name);
		printf("학번을 입력하세요:");
		scanf("%d", &list[i].number);
		printf("평점을 입력하세요:");
		scanf("%lf", &list[i].grade);
	}
	best = get_max_stu(list);
	printf("<평점이 가장 높은 학생>\n");
	printf("이름: %s\n학번: %d\n평점: %lf\n", best.name, best.number, best.grade);
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