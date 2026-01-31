#include <iostream>
using namespace std;



void task2()
{
	setlocale(LC_CTYPE, "Russian");
	float x, y, z, mn, mx;
	cout << "¬ведите x "; cin >> x;
	cout << "¬ведите y "; cin >> y;
	cout << "¬ведите z "; cin >> z;
	/*printf("¬ведите x "); scanf_s("%f", &x);
	printf("¬ведите y "); scanf_s("%f", &y);
	printf("¬ведите z "); scanf_s("%f", &z);*/
	if ((x + y + z) < (x * y * z))
		mx = (x * y * z);
	else
		mx = (x + y + z);
	mn = x;
	if (mn > y) mn = y;
	if (mn > z) mn = z;
	cout << "max(x + y + z, xyz) * min(x, y, z) = " << mn * mx;
	//printf("max(x + y + z, xyz) * min(x, y, z) = %f \n", mn * mx);
}