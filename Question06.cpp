// Question 6: Write a program to join first name and last name using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstName[200], lastName[100];
    cout << "Enter first name: ";
    cin.getline(firstName, 100);
    cout << "Enter last name: ";
    cin.getline(lastName, sizeof(lastName));
    strcat(firstName, " ");
    strcat(firstName, lastName);
    cout << "Full name = " << firstName << '\n';
    return 0;
}
