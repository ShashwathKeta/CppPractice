// MinMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int one, two;
	cout << "Enter your first number: ";
	cin >> one;
	cout << "Enter your second number: ";
	cin >> two;

	if (one > two) {
		cout << "\n" << one << " is the larger number and " << two << " is the smaller number\n";
	}
	else {
		cout << "\n" << two << " is the larger number " << one << "is the smaller number\n";
	}
    return 0;
}

