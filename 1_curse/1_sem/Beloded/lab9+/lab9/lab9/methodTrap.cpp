#include <iostream>
#include "functions.h"


void methodTrap() {
	double h, s = 0, x, n = 200., a = 1., b = 4.;

	h = (b - a) / n;
	x = a;

	while (x < (b - h)) {

		x += h;
		s += h * (f(x) + f(x + h)) / 2;
		
	}
	std::cout << "s = " << s << std::endl;
}