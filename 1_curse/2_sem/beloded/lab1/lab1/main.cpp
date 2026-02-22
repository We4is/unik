#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "rus");

    FILE* fMatrix, * fMatrixPiece;
    int k, size;

    fopen_s(&fMatrix, "matrix.txt", "r");
    fopen_s(&fMatrixPiece, "matrixPiece.txt", "w");

    if (fMatrix == NULL || fMatrixPiece == NULL) return -1;

    if (fscanf_s(fMatrix, "%d", &size) == EOF) return -1;

    printf("Размерность: %d. Введите k (1-%d): ", size, size);
    cin >> k;

    fprintf(fMatrixPiece, "%d\n", 1);



    double value;
    for (int i = 0; i < size; i++) {
        for (int j = 1; j <= size; j++) {
            if (fscanf_s(fMatrix, "%lf", &value) != EOF) {
                if (j == k) {
                    fprintf(fMatrixPiece, "%.1f\n", value);
                }
            }
            else {
                printf("В файле не хватило чисел для матрицы %dx%d\n", size, size);
                break;
            }
        }
    }
    printf("Столбец записан");
    fclose(fMatrix);
    fclose(fMatrixPiece);

    return 0;
}