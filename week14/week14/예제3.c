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
	printf("�� ���̳� �����Ͻðڽ��ϱ�? ");
	scanf("%d", &size);
	movies = (MOVIE*)malloc(sizeof(MOVIE) * size);
	
	for (int i = 0; i < size; i++) {
		printf("��ȭ ����: ");
		scanf("%s", movies[i].title);
		printf("��ȭ ����: ");
		scanf("%lf", &movies[i].rating);
	}

	printf("========================\n");
	printf("���� ����\n");
	printf("========================\n");
	for (int i = 0; i < size; i++) {
		printf("%s %lf\n", movies[i].title, movies[i].rating);
	}
	printf("========================\n");
}
*/