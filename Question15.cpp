// Question 15: Write a program to check if one string is present in another using strstr().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], searchText[100];
    cout << "Enter main string: ";
    cin.getline(text, sizeof(text));
    cout << "Enter string to search: ";
    cin.getline(searchText, sizeof(searchText));

    if (strstr(text, searchText) != nullptr)
        cout << "String is present.\n";
    else
        cout << "String is not present.\n";
    return 0;
}
