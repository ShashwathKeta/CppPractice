// ColorMixer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string color1, color2;
	
	cout << "Enter a color: ";
	cin >> color1;
	if (color1 != "red" && color1 != "blue" && color1 != "yellow") {
		cout << "You have to enter a primary color.";
	}
	else {
		cout << "Enter another color: ";
		cin >> color2;
		if (color2 != "red" && color2 != "blue" && color2 != "yellow") {
			cout << "You have to enter a primary color.";
		}
		else {
			if (color1 == "red" && color2 == "blue") {
				cout << "Your color is Purple\n";
			}
			else if (color1 == "red" && color2 == "yellow") {
				cout << "Your color is Orange\n";
			}
			else if (color1 == "blue" && color2 == "yellow") {
				cout << "Your color is Green\n";
			}
			else if (color1 == color2) {
				cout << "Your color is " << color1 << "\n";
			}
		}
	}
	
    return 0;
}