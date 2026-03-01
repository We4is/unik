#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    ifstream inputFile("FILE1.txt");
    ofstream outputFile("FILE2.txt");

    char lineBuffer[1024];
    int maxACount = -1;
    int targetLineNumber = 0;
    int targetWordPosition = 0;
    int currentLineNumber = 0;

    while (inputFile.getline(lineBuffer, 1024)) {
        currentLineNumber++;

        char words[100][100];
        int wordCount = 0;
        int charIndex = 0;

        for (int i = 0; ; i++) {
            if (lineBuffer[i] != ' ' && lineBuffer[i] != '\0') {
                words[wordCount][charIndex++] = lineBuffer[i];
            }
            else if (charIndex > 0) {
                words[wordCount][charIndex] = '\0';

                int currentACount = 0;
                for (int k = 0; words[wordCount][k]; k++) {
                    unsigned char character = words[wordCount][k];
                    if (character == 'a' || character == 'A' ||
                        character == 224 || character == 192) {
                        currentACount++;
                    }
                }

                if (currentACount > maxACount) {
                    maxACount = currentACount;
                    targetLineNumber = currentLineNumber;
                    targetWordPosition = wordCount + 1;
                }

                wordCount++;
                charIndex = 0;
            }

            if (lineBuffer[i] == '\0') break;
        }

        bool hasDuplicates = false;
        for (int i = 0; i < wordCount; i++) {
            for (int j = i + 1; j < wordCount; j++) {
                int k = 0;
                while (words[i][k] && words[i][k] == words[j][k]) {
                    k++;
                }
                if (words[i][k] == '\0' && words[j][k] == '\0') {
                    hasDuplicates = true;
                }
            }
        }

        if (hasDuplicates) {
            outputFile << lineBuffer << endl;
        }
    }

    cout << "Количество букв 'а': " << maxACount << " В строке: " << targetLineNumber << ", В слове: " << targetWordPosition << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}