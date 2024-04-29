#include <iostream>
using namespace std;

// Function to print the elements of an array
void print(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

// Function to check if a value exists in the array
bool hasValue(int array[], int size, int value){
    for(int i = 0; i < size; i++){
        if(array[i] == value){
            return true;
        }
    }
    return false;
}

// Function to initialize the array with unique random integers between 0 and 9
void randArray(int array[], int size){
    int num;
    for(int i = 0; i < size; i++){
        do{
            num = rand()%10;//Generates a random number between 0 and 9
        }while(hasValue(array, i ,num));// Ensure it is unique in the array up to the current index
        array[i] = num;
    }
}

int main(){
    srand(time(0));

    int array[10];

    randArray(array, 10);//Fill the array with random numbers

    cout << endl;
    print(array, 10);
    cout << endl;//Print the array

    return 0;
}
