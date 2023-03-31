/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp = NULL;
	char title[20];
	char cont[100];
	int num = 0;
	float score = 0.0;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", title);
	;
	if ((fp = fopen(title, "wt")) == NULL) {
		fprintf(stderr, "성적 파일 %s을 열 수 없습니다.\n", title);
		exit(1);
	}
	while (1) {
		printf("학번, 이름, 성적을 입력하시오(음수이면 종료):");
		scanf("%d", &num);
		if (num < 0) exit(1);
		scanf("%s %f", cont, &score);
		fprintf(fp, " %d %s %f", num, cont, score);
	}
	fclose(fp);
	return 0;
}
*/