/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef struct movie {
	char title[100];
	double rating;
}MOVIE;
int main(void) {
	MOVIE* movies;
	int size;
	printf("몇 편이나 저장하시겠습니까? ");
	scanf("%d", &size);
	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	
	for (int i = 0; i < size; i++) {
		printf("영화 제목: ");
		scanf("%s", movies[i].title);
		printf("영화 평점: ");
		scanf("%lf", &movies[i].rating);
	}

	printf("========================\n");
	printf("제목 평점\n");
	printf("========================\n");
	for (int i = 0; i < size; i++) {
		printf("%s %lf\n", movies[i].title, movies[i].rating);
	}
	printf("========================\n");
}
*/