// Question 11: Write a program to check if a string is palindrome using strrev().
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
    char text[200], reversed[200];
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));
    strcpy(reversed, text);
    strrev(reversed);

    if (strcmp(text, reversed) == 0)
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";
    return 0;
}
