#include "stdafx.h"


bool visokos(int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}