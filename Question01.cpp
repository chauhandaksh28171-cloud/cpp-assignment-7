// Question 1: Write a program to input a string and find its length using strlen().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200];
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));
    cout << "Length = " << strlen(text) << '\n';
    return 0;
}
