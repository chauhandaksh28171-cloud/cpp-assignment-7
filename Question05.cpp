// Question 5: Write a program to concatenate two strings using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[400], second[200];
    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, sizeof(second));
    strcat(first, second);
    cout << "Concatenated string = " << first << '\n';
    return 0;
}
