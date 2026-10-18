// Question 18: Write a program to copy only first 5 characters of one string to another using strncpy().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[200], destination[6];
    cout << "Enter a string: ";
    cin.getline(source, sizeof(source));

    strncpy(destination, source, 5);
    destination[5] = '\0';
    cout << "First five characters = " << destination << '\n';
    return 0;
}
