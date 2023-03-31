/*
#include <stdio.h>
struct complex {
	double real;
	double imag;
};

struct complex complex_add(struct complex c1, struct complex c2);

int main(void) {
	struct complex c1, c2, res;
	c1.real = 1.0;
	c1.imag = 2.0;
	c2.real = 2.0;
	c2.imag = 3.0;
	printf("%lf+%lfi\n", c1.real, c1.imag);
	printf("%lf+%lfi\n", c2.real, c2.imag);
	res = complex_add(c1, c2);
	printf("%lf+%lfi", res.real, res.imag);
	return 0;
}

struct complex complex_add(struct complex c1, struct complex c2) {
	struct complex res;
	res.real = c1.real + c2.real;
	res.imag = c1.imag + c2.imag;
	return res;
}
*/