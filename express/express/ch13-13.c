/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct shape {
	int type;
	union {
		struct { int base, height; } tri;
		struct { int width, height; }rect;
		struct { int radius; }circ;
	}data;
};
int main(void) {
	struct shape s;
	int q;
	printf("도형의 타입을 입력하시오(0, 1, 2): ");
	scanf("%d", &s.type);
	if (s.type == 0) {
		printf("밑변과 높이를 입력하시오(예를 들어서 100 200): ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		q = (s.data.tri.base) * (s.data.tri.height) * 0.5;
		printf("면적은 %d", q);
	}
	else if (s.type == 1) {
		printf("가로와 세로의 길이를 입력하시오(예를 들어서 100 200) : ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		q = s.data.rect.width * s.data.rect.height;
		printf("면적은 %d", q);
	}
	else if (s.type == 2) {
		printf("반지름을 입력하시오");
		scanf("%d", &s.data.circ.radius);
		q = s.data.circ.radius * s.data.circ.radius * 3.14;
		printf("면적은 %d", q);
	}
	return 0;
}
*/