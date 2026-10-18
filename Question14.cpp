// Question 14: Write a program to find a substring inside another string using strstr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], substring[100];
    cout << "Enter main string: ";
    cin.getline(text, sizeof(text));
    cout << "Enter substring: ";
    cin.getline(substring, sizeof(substring));

    char* found = strstr(text, substring);
    if (found != nullptr)
        cout << "Substring found at position " << (found - text + 1) << '\n';
    else
        cout << "Substring not found.\n";
    return 0;
}
