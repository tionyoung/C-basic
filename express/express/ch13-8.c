/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double area(struct circle c);
double perimeter(struct circle c);
struct point {
	int x, y;
};

typedef struct circle {
	struct point center;
	double radius;
}CIRCLE;

int main(void) {
	struct point p;
	CIRCLE c;
	double a;
	printf("원의 중심점: ");
	scanf("%d %d", &p.x, &p.y);
	printf("원의 반지름: ");
	scanf("%lf", &c.radius);
	a=area(c);
	printf("원의 면적=%lf\n", a);
	a = perimeter(c);
	printf("원의 둘레=%lf", a);
	return 0;
}

double area(struct circle c) {
	double a = (c.radius) * (c.radius) * 3.14;
	return a;
}
double perimeter(struct circle c) {
	double a = (c.radius) * 2 * 3.14;
	return a;
}
*/