// Question 2: Write a program to count the number of vowels in a string using strlen().
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[200];
    int vowels = 0;
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));

    for (size_t i = 0; i < strlen(text); ++i) {
        char ch = static_cast<char>(tolower(static_cast<unsigned char>(text[i])));
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            ++vowels;
    }
    cout << "Number of vowels = " << vowels << '\n';
    return 0;
}
