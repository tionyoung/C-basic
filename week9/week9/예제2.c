
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

POINT translate(POINT p1, POINT p2);

int main(void) {
	POINT A;
	POINT B;
	POINT C;
	printf("�� �� P�� ��ǥ�� �Է��ϼ���(x y):");
	scanf("%d %d", &A.x, &A.y);
	printf("�̵� ��ǥ�� �Է��ϼ���(dx dy):");
	scanf("%d %d", &B.x, &B.y);
	C = translate(A, B);
	printf("���ο� �� P'�� ��ǥ�� (%d, %d)�Դϴ�.", C.x, C.y);

}

POINT translate(POINT p1, POINT p2) {
	POINT p3 = { p1.x + p2.x, p1.y + p2.y };
	return p3;
}
