#include "checkDate.h"


bool checkDate(int day, int month, int year, int* months) {
    if (year <= 0 || month < 1 || month > 12 || day < 1)
        return false;
    if (day > months[month - 1])
        return false;
    return true;
}