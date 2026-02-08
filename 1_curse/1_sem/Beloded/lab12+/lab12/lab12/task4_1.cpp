#include <iostream>



void task4_1()
{
	int val = 1;
	std::cout << "value = " << val;
	int& rv = val;
	rv = 5;
	std::cout << " value = " << val;
}