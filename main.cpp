// COMSC-210 | Lab 7 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
using namespace std;

const int SIZE = 5;

int main() {
    string *arr = nullptr;
    arr = new string[SIZE];

    *(arr + 0) = "Aaron";
    *(arr + 1) = "Cheyenne";
    *(arr + 2) = "Sophia";
    *(arr + 3) = "Emily";
    *(arr + 4) = "Jasmine";

    delete [] arr;

    return 0;
}