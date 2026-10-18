// Question 10: Write a program to reverse a string using strrev().
#include <iostream>
#include <cstring>
using namespace std;

// Portable implementation of strrev(), which is not part of standard C++.
char* strrev(char* text) {
    size_t left = 0, right = strlen(text);
    if (right == 0) return text;
    --right;
    while (left < right) {
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;
        ++left;
        --right;
    }
    return text;
}

int main() {
    char text[200];
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));
    cout << "Reversed string = " << strrev(text) << '\n';
    return 0;
}
