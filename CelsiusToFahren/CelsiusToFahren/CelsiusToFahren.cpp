// CelsiusToFahren.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double val;
	cout << "Enter in the value you wish to convert: ";
	cin >> val;
	cout << "Type F if it is Fahrenheit and C if it is Celsius: ";
	char type;
	cin >> type;

	if (type = 'C') {
		cout << "The Fahrenheit value of your Celsius Temprature is " << (1.8*val) + 32 << "\n";
	}
	else if (type = 'F') {
		cout << "The Celsius value of your Fahrenheit Temprature is " << (val-32)*(5 / 9) << "\n";
	}
    return 0;
}