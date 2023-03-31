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

	bisection(a, b);
	
	return 0;
}


void bisection(double a, double b) {
	double m=0.0;
	if (func(a) * func(b) >= 0) {
		printf("적절한 값이 아님");
		return;
	}
	while ((b - a) >= EPSILON) {
		m = (a + b) / 2;
		if (func(a) * func(m) < 0) {
			b = m;
		}
		if (func(b) * func(m) < 0) {
			a = m;
		}
	}
	printf("최종 근: %lf", m);

}
*/ 
