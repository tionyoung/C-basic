/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

int equal(struct point* p1, struct point* p2);

int main(void) {
	POINT p1, p2;
	int pd;
	POINT* q1 = &p1;
	POINT* q2 = &p2;

	printf("2차원 공간의 한 점(p1)의 좌표를 입력하시오:");
	scanf("%d %d", &p1.x, &p1.y);
	printf("2차원 공간의 한 점(p2)의 좌표를 입력하시오:");
	scanf("%d %d", &p2.x, &p2.y);
	pd = equal(q1, q2);
	if (pd==1) {
		printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	} else printf("(%d,%d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	

}


int equal(struct point* p1, struct point* p2) {
	if ((p1->x == p2->x) && (p1->y == p2->y)) {
		return 1;
	}
	else return 0;}
	*/