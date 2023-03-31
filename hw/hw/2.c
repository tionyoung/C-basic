/*
#include <stdio.h>

void delete_space(char* s);

int main(void) {
	char st[50];
	printf("문자열을 입력하시오:");
	gets_s(st, 50);
	printf("공백 제거:");
	delete_space(st);
	return 0;
}

void delete_space(char* s) {
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] != ' ') {
			printf("%c", s[i]);
			i++;
		}
		else i++;
	}
}
*/