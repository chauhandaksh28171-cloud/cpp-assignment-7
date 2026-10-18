// Question 13: Write a program to find the last occurrence of a character in a string using strrchr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;
    cout << "Enter a string: ";
    cin.getline(text, sizeof(text));
    cout << "Enter character to find: ";
    cin >> character;

    char* found = strrchr(text, character);
    if (found != nullptr)
        cout << "Last occurrence position = " << (found - text + 1) << '\n';
    else
        cout << "Character not found.\n";
    return 0;
}
