#include <iostream>
using namespace std;

int var1()
{
	double t, u, k = 4, x = 2 * 10e-4, a = 8.1;

	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);

	cout << "Var 1" << endl;
	cout << "t = " << t << endl;
	cout << "u = " << u << endl;
	return 0;
}