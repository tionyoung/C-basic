
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
	printf("한 점 P의 좌표를 입력하세요(x y):");
	scanf("%d %d", &A.x, &A.y);
	printf("이동 좌표를 입력하세요(dx dy):");
	scanf("%d %d", &B.x, &B.y);
	C = translate(A, B);
	printf("새로운 점 P'의 좌표는 (%d, %d)입니다.", C.x, C.y);

}

POINT translate(POINT p1, POINT p2) {
	POINT p3 = { p1.x + p2.x, p1.y + p2.y };
	return p3;
}
