// Triagnle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int size;

	while (1 == 1) {

		cout << "Enter size of the right triangle, Enter -1 to exit: ";
		cin >> size;
		cout << "\n\n";

		if (size == -1) {
			cout << "Ending\n";
			break;
		}

		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
    return 0;
}

