/*
#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
 };

struct student list[] = {
	{202101, "홍", 4.2},
	{202102, "김", 3.2},
	{202103, "이", 3.9}
};

int main(void) {
	struct student best = list[0];
	for (int i = 0; i < 3; i++) {
		if ( best.grade <= list[i].grade) {
			best = list[i];
		}
		
	}
	printf("<평점이 가장 높은 학생>\n");
	printf("이름: %s\n학번: %d\n평점: %lf\n", best.name, best.number, best.grade);
}
*/