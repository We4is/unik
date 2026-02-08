#include <iostream>
#include "functions.h"


void methodDihot() {
	double e = 0.0001, a = 1., b = 4., x = 0;

	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if (f2(x) * f2(a) <= 0) b = x;
		else a = x;
	}

	std::cout << "x = " << x;
}