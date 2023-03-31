/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void set_proverb(char** q, int n);

int main(void) {
	int n;
	char* q;
	printf("몇번째 속담을 선택하시겠습니까?");
	scanf("%d", &n);
	set_proverb(&q, n);
	printf("selected proverb = %s", q);

}

void set_proverb(char** q, int n) {
	static char* array[10] = { "a", "b", "c", "d", "e","f","g","h","i","j" };
	*q = array[n-1];
}
*/