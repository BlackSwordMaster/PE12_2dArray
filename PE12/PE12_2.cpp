#include <iostream>
using namespace std;

// Function to print the elements of an array
void print(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to randomly modify each element of the array by up to +/- 5.
void printOffSet(int array[], int size){
    for(int i = 0; i < size; i++){
         // Generate a random number between -5 and 5
        int OffSet = (rand()%11) - 5;// rand() % 11 generates a value from 0 to 10
        array[i] += OffSet;//We use the random number generated and add it to our orignal for each element
    }
}

int main(){
    srand(time(0));

    int array[5] = {5, 1, 4, 9, 2};

    cout << "\nOriginal: ";
    print(array, 5);//Print original array

    printOffSet(array, 5);//Modify the element of the array

    cout << "Offset: ";
    print(array, 5);//Print the modifyed array
    cout << endl;

    return 0;
}