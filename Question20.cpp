// Question 20: Write a program to check whether two strings are anagrams using string functions.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first[300], second[300];
    cout << "Enter first string: ";
    cin.getline(first, sizeof(first));
    cout << "Enter second string: ";
    cin.getline(second, sizeof(second));

    int counts[256] = {};
    for (size_t i = 0; i < strlen(first); ++i) {
        unsigned char ch = static_cast<unsigned char>(first[i]);
        if (!isspace(ch)) ++counts[static_cast<unsigned char>(tolower(ch))];
    }
    for (size_t i = 0; i < strlen(second); ++i) {
        unsigned char ch = static_cast<unsigned char>(second[i]);
        if (!isspace(ch)) --counts[static_cast<unsigned char>(tolower(ch))];
    }

    bool anagram = true;
    for (int count : counts) {
        if (count != 0) { anagram = false; break; }
    }
    if (anagram) cout << "The strings are anagrams (ignoring spaces and letter case).\n";
    else cout << "The strings are not anagrams.\n";
    return 0;
}
