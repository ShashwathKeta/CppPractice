// SalesBarChart.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int input1,input2,input3;

	cout << "Enter in the first stores sales to the nearest $100: ";
	cin >> input1;
	cout << "Enter in the second stores sales to the nearest $100: ";
	cin >> input2;
	cout << "Enter in the third stores sales to the nearest $100: ";
	cin >> input3;

	cout << "\nBar Graph One: ";
	for (int i = 0; i < input1 / 100; i++) {
		cout << "*";
	}

	cout << "\nBar Graph Two: ";
	for (int i = 0; i < input2 / 100; i++) {
		cout << "*";
	}

	cout << "\nBar Graph Three: ";
	for (int i = 0; i < input3 / 100; i++) {
		cout << "*";
	}
	cout << "\n\n";

    return 0;
}

