/*
#include <stdio.h>
void sort_strings(char* s[], int size);
int main(void) {

}

void sort_strings(char* list[], int size) {
	int i, j, least;
	char* temp;

	for (i = 0; i < size - 1; i++)
	{
		least = i;
		for (j = i + 1; j < size; j++)
			if (strcmp(list[j], list[least]) < 0)
				least = j;

		temp = list[i];
		list[j] = list[least];
		list[least] = temp;
	}
}
*/