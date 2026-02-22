#include "stdafx.h"


bool isValid(int& data) {
    cin >> data;
    if (cin.fail()) {
        cout << "Îøèáêà! Ââåäèòå ÷èñëî." << endl;
        cin.clear();
        cin.ignore(10000, '\n');
        return false;
    }
    return true;
}