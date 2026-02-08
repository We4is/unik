#include <iostream>
using namespace std;

int var14()
{
	double s, w, v, a = 1.5, b = -8.1, j = 4, t = 4e-8;

	s = sqrt((t * a) / (t + 1)) + 4 * exp(2 * b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(a * a + b * b);

	cout << "Var 14" << endl;
	cout << "s = " << s << endl;
	cout << "w = " << w << endl;
	cout << "v = " << v << endl;
	return 0;
}