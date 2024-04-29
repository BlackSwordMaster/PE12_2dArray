#include <iostream>
using namespace std;

const int SIZE = 5;

// Function to input the array with values from 575 to 599
void Array(int array[SIZE][SIZE]){
    int value = 575;
    for(int a = 0; a < SIZE; a++){
        for(int b = 0; b < SIZE; b++){
            array[a][b] = value++;
        }
    }
}

// Function to print the entire array as a grid
void printGrid(int array[SIZE][SIZE]){
    for(int a = 0; a < SIZE; a++){
        for(int b = 0; b < SIZE; b++){
            cout << array[a][b] << " ";
        }
        cout << endl;
    }
}

// Function to print all elements in a specified row
void printRow(int array[SIZE][SIZE], int r){
    cout << "Row " << r << ": ";
    for(int b = 0; b < SIZE; b++){
        cout << array[r-1][b] << " ";
    }
    cout << endl;
}

// Function to print all elements in a specified column
void printCol(int array[SIZE][SIZE], int c){
    cout << "Col " << c << ": ";
    c--;// Adjust for 0-based indexing
    for(int a = 0; a < SIZE; a++){
        cout << array[a][c] << " ";
    }
    cout << endl;
}

// Function to print all elements in the main diagonal (r == c)
void printMainDiagonal(int arr[SIZE][SIZE]) {
    cout << "Diagonal 1: ";
    for (int a = 0; a < SIZE; a++) {
        cout << arr[a][a] << " ";
    }
    cout << endl;
}

// Function to print all elements in the opposing diagonal
void printOpposingDiagonal(int arr[SIZE][SIZE]) {
    cout << "Diagonal 2: ";
    for (int a = 0; a < SIZE; a++) {
        cout << arr[a][SIZE - 1 - a] << " ";
    }
    cout << endl;
}

int main() {
    int array[SIZE][SIZE];  // Declare a 5x5 array of integers

    Array(array);  // Populate the array with values
    printGrid(array);      // Print the grid
    printRow(array, 1);    // Print the second row (index 1)
    printCol(array, 2); // Print the third column (index 2)
    printMainDiagonal(array);  // Print the main diagonal
    printOpposingDiagonal(array);  // Print the opposing diagonal

    return 0;
}