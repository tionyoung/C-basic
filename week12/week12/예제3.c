/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;
	char fname[100] = "data.txt";
	
	if ((fp = fopen(fname, "r+")) == NULL) {
		fprintf(stderr, "data.txt파일을 열 수 없습니다.");
		exit(1);
	}

	fseek(fp, -5, SEEK_END);
	fputs("apple", fp);

	fclose(fp);

	return 0;
}
*/
