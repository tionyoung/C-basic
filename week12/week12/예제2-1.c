/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;
	char fname[100];
	char name[100];
	int num;
	double score;
	double total=0.0;
	int std = 0;
	
	printf("���� ���� �̸��� �Է��Ͻÿ�:");
	scanf("%s", fname);

	if ((fp = fopen(fname, "r"))==NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�", fname);
		exit(1);
	}

	while (!feof(fp)) {
		fscanf(fp, "%d %s %lf", &num, name, &score);
		total += score;
		std++;
	}
	total = total / std;

	printf("��� = %lf", total);

	fclose(fp);
	return 0;
}
*/