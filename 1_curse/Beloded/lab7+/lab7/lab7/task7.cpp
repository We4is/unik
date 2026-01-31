#include <iostream>



void task7() {
	for (int i = 100; i <= 999; i++) {
		if ((i / 100) != (i % 100) / 10 && (i / 100) != (i % 10) && (i - 100 * (i / 100)) / 10 != i % 10) 
		{
			std::cout << i << " ";
		}
	}
	
}