// Question 17: Write a program to remove all vowels from a string using string functions.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[300];
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));

    int writeIndex = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        char ch = static_cast<char>(tolower(static_cast<unsigned char>(text[i])));
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            text[writeIndex++] = text[i];
    }
    text[writeIndex] = '\0';
    cout << "String without vowels = " << text << '\n';
    return 0;
}
