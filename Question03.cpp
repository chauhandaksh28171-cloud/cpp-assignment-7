// Question 3: Write a program to copy one string to another using strcpy().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[200], destination[200];
    cout << "Enter a string: ";
    cin.getline(source, sizeof(source));
    strcpy(destination, source);
    cout << "Copied string = " << destination << '\n';
    return 0;
}
