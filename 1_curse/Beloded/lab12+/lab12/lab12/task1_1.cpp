#include <iostream>
using namespace std;



void task1_1()
{
	int a = 10, * pa, b = 20, * pb;
	pa = &a;
	cout << &a << " " << a << endl;
	cout << pa << " " << *pa << endl;
	pb = &b;
	cout << pb << " " << *pb << endl;
	*pa = *pb;
	cout << &a << " " << a << endl;
}