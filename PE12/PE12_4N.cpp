#include <iostream>
using namespace std;

int main() {
    int array[5][5]; // Declare a 5x5 array of integers
    int value = 575; // Initial value for the array

    // a) Populate the array with values from 575 to 599
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            array[a][b] = value++;
        }
    }

    // b) Output the array as a grid
    for (int a = 0; a < 5; a++) {
        for (int b = 0; b < 5; b++) {
            cout << array[a][b] << " ";
        }
        cout << endl;
    }

    // c) Output all elements in the second row
    cout << "Row 1: ";
    for (int b = 0; b < 5; b++) {
        cout << array[0][b] << " ";
    }
    cout << endl;

    // d) Output all elements in the third column
    cout << "Col 2: ";
    for (int a = 0; a < 5; a++) {
        cout << array[a][1] << " ";
    }
    cout << endl;

    // e) Output all elements in the first diagonal (r==c)
    cout << "Diagonal 1: ";
    for (int a = 0; a < 5; a++) {
        cout << array[a][a] << " ";
    }
    cout << endl;

    // f) Output all elements in the opposing diagonal
    cout << "Diagonal 2: ";
    for (int a = 0; a < 5; a++) {
        cout << array[a][4 - a] << " ";
    }
    cout << endl;

    return 0;
}
