#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void) {
	char s1[30], s2[30];
	char* w1 = s1;
	char* w2 = s2;
	int i, len;
	gets(s1, 30);
	gets(s2, 30);
	if (strlen(w1) > strlen(w2)) {
		len = strlen(w1);
	}
	else {
		len = strlen(w2);
	}
	for (i = 0; i < len; i++) {
		if (*(w1 + i) == *(w2 + i)) {
			printf("O");
		}
		else {
			printf("X");

		}
	}
	return 0;
}