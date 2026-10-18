// Question 8: Write a program to check if two strings are equal (case-sensitive) using strcmp().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200];
    cout << "Enter first string: ";
    cin.getline(first, sizeof(first));
    cout << "Enter second string: ";
    cin.getline(second, sizeof(second));

    if (strcmp(first, second) == 0)
        cout << "Strings are equal (case-sensitive).\n";
    else
        cout << "Strings are not equal.\n";
    return 0;
}
