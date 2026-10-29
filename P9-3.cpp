//Author: Mason Koren
//File: P9-3.cpp
//Date: 10/28/2026
//Description: Outputting a converted roman numeral to number value
//Completed

#include <iostream>
#include <string>
using namespace std;

int value(char c);
int convertRomanToInt(string s);

int main() {
    string s;
    while (true) {
        cout << "Enter a Roman Numeral here (Q to quit): ";
        cin >> s;

        if (s == "Q") {
            break;
        }
        cout << "Converted Value: " << convertRomanToInt(s) << endl;
    }
    return 0;
}

int value(char c) {
    switch (c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    break;
    }
}

int convertRomanToInt(string s) {
    int total = 0;
    int i = 0;

    while (i < s.length()) {
        if (i == s.length() - 1 || value(s[i]) >= value(s[i + 1])) {
            total += value(s[i]);
            i++;
        }
        else {
            total += value(s[i + 1]) - value(s[i]);
            i += 2;
        }
    }
    return total;
}
