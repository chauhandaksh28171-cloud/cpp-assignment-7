// Question 19: Write a program to join multiple strings into one sentence using strcat().
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[600] = "";
    char part[150];
    int n;
    cout << "How many strings do you want to join (1-5)? ";
    cin >> n;
    if (n < 1 || n > 5) {
        cout << "Invalid number of strings.\n";
        return 0;
    }
    cin.ignore(10000, '\n');

    for (int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(part, sizeof(part));
        if (i > 0) strcat(sentence, " ");
        strcat(sentence, part);
    }
    cout << "Joined sentence = " << sentence << '\n';
    return 0;
}
