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

	printf("�Է� ���� �̸��� �Է��Ͻÿ�:");
	scanf("%s", file);

	if ((fp = fopen(file, "r")) == NULL) {
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.", file);
		exit(1);
	}
	printf("Ž���� �ܾ �Է��Ͻÿ�:");
	scanf("%s", word);

	while (fgets(buffer, 100, fp)) {
		line++;
		if (strstr(buffer, word)) {
			printf("%s: %d��° �ٿ��� �ܾ� %s�� �߰ߵǾ����ϴ�.", file, line, word);
		}
	}
	fclose(fp);
	return 0;
}
