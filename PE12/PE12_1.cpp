#include <iostream>
using namespace std;

void print(int Q[8]){
    for(int r = 0; r < 8; r++){
        for(int c =0; c < 8; c++){
            // Check if the current row r matches the row stored in Q[c] for the current column c
            if(Q[c] == r){
                cout << "Q ";
            }else{
                cout << ". ";
            }
        }
        cout << endl;
    }
}

int main(){
    int Q[8] = {1, 4, 2, 5, 6, 7, 0, 3};

    for(int i = 0; i < 8; i++){
        cout << Q[i] << " ";
    }
    cout << endl;
    
    print(Q);

    return 0;
}