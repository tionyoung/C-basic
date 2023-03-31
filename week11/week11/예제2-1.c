/*
#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

double func(double x) {
	return x * x * x - x * x + 2;
}

void bisection(double a, double b);

int main(void) {
	double a = -200.0;
	double b = 200.0;
	double m = (a + b) / 2;

	while (func(a) * func(b) < 0) {
		if (func(a) * func(b) < 0) {
			m = (a + b) / 2;
			if (func(m) * func(a) < 0) {
				b = m;
			}
			else {
				a = m;
			}
		}
		if ((b - a) < EPSILON) {
			break;
		}

	}
	printf("ÃÖÁ¾ ±Ù: %lf", m);
	return 0;
}
*/
