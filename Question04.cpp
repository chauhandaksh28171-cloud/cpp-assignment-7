// Question 4: Write a program to input two strings and check if they are equal using strcpy() and comparison.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200], copied[200];
    cout << "Enter first string: ";
    cin.getline(first, sizeof(first));
    cout << "Enter second string: ";
    cin.getline(second, sizeof(second));

    strcpy(copied, first);
    if (strcmp(copied, second) == 0)
        cout << "Both strings are equal.\n";
    else
        cout << "Strings are not equal.\n";
    return 0;
}
