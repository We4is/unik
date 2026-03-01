#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    char inputString[1000];
    char firstPart[1000];
    char secondPart[1000];

    int splitPosition; 
    int sourceIndex, targetIndex;  

    cout << "Введите строку: ";
    cin.getline(inputString, 1000);
    ofstream outputFile("f.txt");
    outputFile << inputString;
    outputFile.close();

    ifstream inputFile("f.txt");
    inputFile.getline(inputString, 1000);
    inputFile.close();

    cout << "Введите k (позиция разделения): ";
    cin >> splitPosition;

    for (sourceIndex = 0; sourceIndex < splitPosition && inputString[sourceIndex] != '\0'; sourceIndex++) {
        firstPart[sourceIndex] = inputString[sourceIndex];
    }
    firstPart[sourceIndex] = '\0'; 

    for (targetIndex = 0; inputString[sourceIndex] != '\0'; sourceIndex++, targetIndex++) {
        secondPart[targetIndex] = inputString[sourceIndex];
    }
    secondPart[targetIndex] = '\0'; 

    cout << "Первая часть (первые " << splitPosition << " символов): " << firstPart << endl;
    cout << "Вторая часть (остальные символы): " << secondPart << endl;

    return 0;
}