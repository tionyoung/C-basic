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
	printf("������ Ÿ���� �Է��Ͻÿ�(0, 1, 2): ");
	scanf("%d", &s.type);
	if (s.type == 0) {
		printf("�غ��� ���̸� �Է��Ͻÿ�(���� �� 100 200): ");
		scanf("%d %d", &s.data.tri.base, &s.data.tri.height);
		q = (s.data.tri.base) * (s.data.tri.height) * 0.5;
		printf("������ %d", q);
	}
	else if (s.type == 1) {
		printf("���ο� ������ ���̸� �Է��Ͻÿ�(���� �� 100 200) : ");
		scanf("%d %d", &s.data.rect.width, &s.data.rect.height);
		q = s.data.rect.width * s.data.rect.height;
		printf("������ %d", q);
	}
	else if (s.type == 2) {
		printf("�������� �Է��Ͻÿ�");
		scanf("%d", &s.data.circ.radius);
		q = s.data.circ.radius * s.data.circ.radius * 3.14;
		printf("������ %d", q);
	}
	return 0;
}
*/