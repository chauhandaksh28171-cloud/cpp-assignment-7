// Question 7: Write a program to compare two strings using strcmp().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200];
    cout << "Enter first string: ";
    cin.getline(first, sizeof(first));
    cout << "Enter second string: ";
    cin.getline(second, sizeof(second));

    int result = strcmp(first, second);
    if (result == 0)
        cout << "Both strings are equal.\n";
    else if (result < 0)
        cout << "First string comes before second string.\n";
    else
        cout << "First string comes after second string.\n";
    return 0;
}
