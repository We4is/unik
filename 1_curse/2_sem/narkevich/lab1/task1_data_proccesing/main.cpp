#include <iostream>
using namespace std;

bool visokos(int year);
int dayNum(int day, int month, int* months);
bool isValid(int& data);
bool checkDate(int day, int month, int year, int* months);

int main() {
    setlocale(LC_CTYPE, "rus");
    int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int data, happyData;
    int day, dayNumber, month, year, happyDayDiff, happyMonth, happyDay, happyDayNumber, happyYear;
    bool valid, visFlag;

    do {
        valid = true;

        cout << "Введите дату в формате ДДММГГГГ: ";
        if (!isValid(data)) {
            valid = false;
            continue;
        }

        day = data / 1000000;
        month = (data / 10000) % 100;
        year = data % 10000;

        visFlag = visokos(year);
        months[1] = visFlag ? 29 : 28;

        if (!checkDate(day, month, year, months)) {
            cout << "Некорректная текущая дата!" << endl;
            valid = false;
            continue;
        }

        cout << "Введите дату вашего рождения в формате ДДММГГГГ: ";
        if (!isValid(happyData)) {
            valid = false;
            continue;
        }

        happyDay = happyData / 1000000;
        happyMonth = (happyData / 10000) % 100;
        happyYear = happyData % 10000;

        if (happyDay == 29 && happyMonth == 2) {
            cout << "Введите перенесенную дату " << endl;
            valid = false;
            continue;
        }

        int birthMonths[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        birthMonths[1] = visokos(happyYear) ? 29 : 28;

        if (!checkDate(happyDay, happyMonth, happyYear, birthMonths)) {
            cout << "Некорректная дата рождения!" << endl;
            valid = false;
            continue;
        }

        if (happyYear > year ||
            (happyYear == year && happyMonth > month) ||
            (happyYear == year && happyMonth == month && happyDay > day)) {
            cout << "Вы еще не родились!" << endl;
            valid = false;
            continue;
        }

    } while (!valid);

    cout << "\nДата корректна: " << day << "." << month << "." << year << endl;
    cout << (visFlag ? "Год високосный" : "Год не високосный") << endl;

    happyDayNumber = dayNum(happyDay, happyMonth, months);
    dayNumber = dayNum(day, month, months);

    cout << "Порядковый номер дня в году = " << dayNumber << endl;

    happyDayDiff = happyDayNumber - dayNumber;
    if (happyDayDiff < 0) {
        int daysLeft = (visFlag ? 366 : 365) - dayNumber;
        happyDayDiff = daysLeft + happyDayNumber;
    }
    else if (happyDayDiff == 0) {
        cout << "День рождения сегодня!";
    }

    cout << "\nДней до дня рождения = " << happyDayDiff << endl;

    system("pause");
    return 0;
}

bool isValid(int& data) {
    cin >> data;
    if (cin.fail()) {
        cout << "Ошибка! Введите число." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
    return true;
}

bool checkDate(int day, int month, int year, int* months) {
    if (year <= 0 || month < 1 || month > 12 || day < 1)
        return false;
    if (day > months[month - 1])
        return false;
    return true;
}

bool visokos(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayNum(int day, int month, int* months) {
    int sum = 0;
    for (int i = 0; i < month - 1; i++) {
        sum += months[i];
    }
    return sum + day;
}