// COMSC-210 | Lab 7 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

const int SIZE = 5;

// displayArray() outputs dynamic string array elements
// arguments: pointer to dynamic array, num of elements
// returns: nothing
void displayArray(string *arr, int SIZE);

// reverseArray() reverses the dynamic string array elements
// arguments: pointer to dynamic array, num of elements
// returns: reversed array
string *reverseArray(string *arr, int SIZE);

int main() {
    string *arr = nullptr;
    arr = new string[SIZE];

    *(arr + 0) = "Aaron";
    *(arr + 1) = "Cheyenne";
    *(arr + 2) = "Sophia";
    *(arr + 3) = "Emily";
    *(arr + 4) = "Jasmine";

    cout << "Original array: ";
    displayArray(arr, SIZE);

    arr = reverseArray(arr, SIZE);
    cout << "Reversed array: ";
    displayArray(arr, SIZE);

    delete [] arr;

    return 0;
}

void displayArray(string *arr, int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

string *reverseArray(string *arr, int SIZE) {
    int i = 0;
    int j = SIZE - 1;
    while (i < j) {
        string temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;

        i++;
        j--;
    }
    return arr;
}