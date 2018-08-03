// MultiplicationTable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;
	int mult[3][10];

	//12 by 12 grid first

	for (int i = 1; i <= 12;i++) {
		for (int j = 1; j <= 12; j++) {
			cout << i * j << "|";
		}
		cout << "\n";
	}

	cout << "\n\n\n";

	//User input grid

	for (int i = 0; i < 10;i++) {
		mult[0][i] = i + 1;
	}

	cout << "What number multiplication table would you like: ";
	cin >> num;

	for (int i = 0; i < 10;i++) {
		mult[1][i] = num;
	}
	for (int i = 0; i < 10; i++) {
		mult[2][i] = mult[0][i] * mult[1][i];
	}

	for (int i = 0; i < 10;i++) {
		cout << mult[0][i] << " * " << mult[1][i] << " = " << mult[2][i] << "\n";
	}

    return 0;
}

