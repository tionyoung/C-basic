/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int quadrant(struct point p);
struct point {
	int x, y;
};
int main(void) {
	struct point p;
	int q;
	printf("x y ��ǥ�� �Է��Ͻÿ�: ");
	scanf("%d %d", &p.x, &p.y);
	q = quadrant(p);
	printf("(%d, %d)�� ��и�=%d", p.x, p.y, q);
	return 0;
}

int quadrant(struct point p) {
	if ((p.x >= 0) && (p.y >= 0))
		return 1;
	if ((p.x > 0) && (p.y < 0))
		return 4;
	if ((p.x < 0) && (p.y > 0))
		return 2;
	if ((p.x < 0) && (p.y < 0))
		return 3;
}
*/