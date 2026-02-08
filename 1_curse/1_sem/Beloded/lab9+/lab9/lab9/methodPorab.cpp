#include <iostream>
#include "functions.h"


void methodPorab() {
	double h, s1 = 0, s2 = 0, x, n = 200., a = 1., b = 4., i = 1, S;

	h = (b - a) / (2 * n);
	x = a + 2 * h;

	while (i < n) {
		s2 += f(x);
		x += h;
		s1 += f(x);
		x += h;
		i++;
	}

	S = (h / 3) * (f(a) + 4 * f(a + h) + 4 * s1 + 2 * s2 + f(b));
	std::cout << "S = " << S << std::endl;



}