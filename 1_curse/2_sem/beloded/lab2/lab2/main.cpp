#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    ifstream fin("FILE1.txt");
    ofstream fout("FILE2.txt");

    char line[1024];
    int maxA = -1, finalLine = 0, finalWord = 0, lineCnt = 0;

    while (fin.getline(line, 1024)) {
        lineCnt++;
        char w[100][100];
        int n = 0, cIdx = 0;

        for (int i = 0; ; i++) {
            if (line[i] != ' ' && line[i] != '\0') {
                w[n][cIdx++] = line[i];
            }
            else if (cIdx > 0) {
                w[n][cIdx] = '\0';

                int curA = 0;
                for (int k = 0; w[n][k]; k++) {
                    unsigned char c = w[n][k];
                    if (c == 'a' || c == 'A' || c == 224 || c == 192) curA++;
                }

                if (curA > maxA) {
                    maxA = curA;
                    finalLine = lineCnt;
                    finalWord = n + 1;
                }
                n++; cIdx = 0;
            }
            if (line[i] == '\0') break;
        }

        bool dup = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = 0;
                while (w[i][k] && w[i][k] == w[j][k]) k++;
                if (w[i][k] == '\0' && w[j][k] == '\0') dup = true;
            }
        }

        if (dup) fout << line << endl;
    }

    cout << "Кол-во а: " << maxA << " В строке: " << finalLine << ", В слове: " << finalWord << endl;

    fin.close(); 
    fout.close();
    return 0;
}