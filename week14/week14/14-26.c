/*
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE {
	int data;
	struct NODE* link;
}NODE;

int main(void) {
	NODE* p1;
	p1 = (NODE*)malloc(sizeof(NODE));

	p1->data = 10;
	p1->link = NULL;

	NODE* p2;
	p2 = (NODE*)malloc(sizeof(NODE));
	p2->data = 20;

	p2->link = NULL;
	p1->link = p2;

	free(p1);
	free(p2);

	return 0;
}
*/