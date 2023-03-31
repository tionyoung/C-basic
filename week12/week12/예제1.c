#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	char buffer[100];
	FILE* fp = NULL;
	char file[30];
	char word[30];
	int line = 0;

	printf("입력 파일 이름을 입력하시오:");
	scanf("%s", file);

	if ((fp = fopen(file, "r")) == NULL) {
		fprintf(stderr, "원본 파일 %s을 열 수 없습니다.", file);
		exit(1);
	}
	printf("탐색할 단어를 입력하시오:");
	scanf("%s", word);

	while (fgets(buffer, 100, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("%s: %d번째 줄에서 단어 %s이 발견되었습니다.", file, line, word);
		}
	}
	fclose(fp);
	return 0;
}
