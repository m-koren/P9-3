//Author: Mason Koren
//File: P9-3.cpp
//Date: 10/28/2026
//Description: Outputting a converted roman numeral to number value

#include <iostream>
#include <string>
using namespace std;
int romanCharValue(char r);

int main() {
	char r;
	while (true) {
		cout << "Enter a Roman Numeral here: ";
		cin >> r;
		if (romanCharValue(r) == 'Q') {
			break;
		}
		cout << "Converted Value: " << romanCharValue(r) << endl;

	}
}

int romanCharValue(char r) {
	if (r == 'I') {
		return 1;
	}
	if (r == 'V') {
		return 5;
	}
	if (r == 'X') {
		return 10;
	}
	if (r == 'L') {
		return 50;
	}
	if (r == 'C') {
		return 100;
	}
	if (r == 'D') {
		return 500;
	}
	if (r == 'M') {
		return 1000;
	}
}