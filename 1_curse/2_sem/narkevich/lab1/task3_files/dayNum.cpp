#include "stdafx.h"


int dayNum(int day, int month, int* months) {
	int sum = 0;
	for (int i = 0; i < month - 1; i++) {
		sum += months[i];
	}
	return sum + day;
}