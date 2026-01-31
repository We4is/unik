#include <iostream>
using namespace std;



int task5_1()
{
    int arr[] = { 1, 0, 2, 4, 0, 7, 2, 6, 0, 2, 3 };
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) { // Нахождение первого нулевого элемента
        if (arr[i] == 0) {
            cout << "First null element index: " << i << endl;
            break;
        }
    }
    for (int i = size - 1; i > 0; i--) { // Нахождение последнего нулевого элемента
        if (arr[i] == 0) {
            cout << "Last null element index: " << i << endl;
            break;
        }
    }
    return 0;
}
