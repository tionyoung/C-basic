/*
#include <stdio.h>
double get_average(int list[], int n);
int main(void) {
	int scores[3][2] = { 10,10,20,20,30,30};
	for (int i = 0; i < 3; i++) {
		double average = get_average(scores[i], 2);
		printf("%dÇàÀÇ Æò±Õ°ª=%lf\n", i, average);
	}
	return 0;
}

double get_average(int list[], int n) {
	double hap=0.0;
	int* ptr = &list[0];
	for (int i = 0; i < n; i++) {
		hap += *ptr;
		ptr++;
	}
	hap /= 2;
	return hap;
}
*/