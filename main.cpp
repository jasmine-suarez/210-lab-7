// COMSC-210 | Lab 7 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

const int SIZE = 5;

void displayArray(string *arr, int SIZE);
string *reverseArray(string *arr, int SIZE);

int main() {
    string *arr = nullptr;
    arr = new string[SIZE];

    *(arr + 0) = "Aaron";
    *(arr + 1) = "Cheyenne";
    *(arr + 2) = "Sophia";
    *(arr + 3) = "Emily";
    *(arr + 4) = "Jasmine";

    displayArray(arr, SIZE);
    reverseArray(arr, SIZE);

    delete [] arr;

    return 0;
}

void displayArray(string *arr, int SIZE) {
    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
}

string *reverseArray(string *arr, int SIZE) {
    return arr;
}