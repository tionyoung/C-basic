/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct food {
	char name[100];
	int calories;
};
int main(void) {
	struct food food_array[3];
	int hap = 0;
	for (int i = 0; i < 3; i++) {
		printf("À½½Ä: ");
		scanf("%s", food_array[i].name);
		printf("Ä®·Î¸®: ");
		scanf("%d", &food_array[i].calories);
	}
	for (int i = 0; i < 3; i++) {
		hap += food_array[i].calories;
	}
	printf("ÃÑ Ä®·Î¸®=%d", hap);
	return 0;
}
*/