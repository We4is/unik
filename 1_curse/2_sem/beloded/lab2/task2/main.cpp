#include <iostream>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");
    char s[1000], p1[1000], p2[1000];
    int k, i, j;

    cout << "¬ведите строку: ";
    cin.getline(s, 1000);

    ofstream fout("f.txt");
    fout << s;
    fout.close();

    ifstream fin("f.txt");
    fin.getline(s, 1000);
    fin.close();

    cout << "¬ведите k: ";
    cin >> k;

    for (i = 0; i < k && s[i] != '\0'; i++) {
        p1[i] = s[i];
    }
    p1[i] = '\0';

    for (j = 0; s[i] != '\0'; i++, j++) {
        p2[j] = s[i];
    }
    p2[j] = '\0'; 

    cout << "„асть 1: " << p1 << endl;
    cout << "„асть 2: " << p2 << endl;

    return 0;
}