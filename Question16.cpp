// Question 16: Write a program to count the number of words in a string using strlen() and spaces.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char text[300];
    cout << "Enter a sentence: ";
    cin.getline(text, sizeof(text));

    int words = 0;
    bool insideWord = false;
    for (size_t i = 0; i < strlen(text); ++i) {
        if (!isspace(static_cast<unsigned char>(text[i]))) {
            if (!insideWord) ++words;
            insideWord = true;
        } else {
            insideWord = false;
        }
    }
    cout << "Number of words = " << words << '\n';
    return 0;
}
