/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;
	char title[20];
	char cont[100];
	int num = 0;
	float score = 0.0;

	printf("���� ���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", title);
	;
	if ((fp = fopen(title, "wt")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", title);
		exit(1);
	}
	while (1) {
		printf("�й�, �̸�, ������ �Է��Ͻÿ�(�����̸� ����):");
		scanf("%d", &num);
		if (num < 0) exit(1);
		scanf("%s %f", cont, &score);
		fprintf(fp, " %d %s %f", num, cont, score);
	}
	fclose(fp);
	return 0;
}
*/