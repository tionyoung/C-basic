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
	printf("���� �߽���: ");
	scanf("%d %d", &p.x, &p.y);
	printf("���� ������: ");
	scanf("%lf", &c.radius);
	a=area(c);
	printf("���� ����=%lf\n", a);
	a = perimeter(c);
	printf("���� �ѷ�=%lf", a);
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