/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned char image[10][10];
	int i, k, r;
	for (i = 0; i < 10; i++) {
		for (k = 0; k < 10; k++) {
			while (1) {
				r = rand();
				if (r < 128) {
					image[i][k] = 0;
					break;
				}
				else if ((r >= 128) && (r <= 255)) {
					image[i][k] = 255;
					break;
				}
			}
			printf("%d ", image[i][k]);
		}
		printf("\n");
	}
	
}
*/