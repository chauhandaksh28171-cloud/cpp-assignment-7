// Question 9: Write a program to arrange an array of strings in alphabetical order using strcmp().
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings (1-50): ";
    cin >> n;
    if (n < 1 || n > 50) {
        cout << "Invalid number of strings.\n";
        return 0;
    }
    cin.ignore(10000, '\n');

    char names[50][100], temp[100];
    for (int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(names[i], sizeof(names[i]));
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; ++i) cout << names[i] << '\n';
    return 0;
}
