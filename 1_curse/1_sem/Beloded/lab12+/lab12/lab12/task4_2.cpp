#include <iostream>



void task4_2()
{
	int val = 1;
	std::cout << "value = " << val;
	int& rv = val;
	rv = 5;
	int* pval = &rv;
	std::cout << " value = " << *pval;
}