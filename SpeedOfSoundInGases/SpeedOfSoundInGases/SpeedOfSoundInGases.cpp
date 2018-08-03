// SpeedOfSoundInGases.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double choice, numSeconds;

	cout << "Which medium would you like to travel through:\n1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen\n";
	cin >> choice;
	if (choice > 4) {
		cout << "Enter a number that is matched with a gas.\n";
		cout << "Which medium would you like to travel through:\n1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen\n";
		cin >> choice;
	}
	cout << "Enter the time the sound travels through this medium: ";
	cin >> numSeconds;

	if (choice == 1) {
		cout << "The sound travels " << numSeconds * 258 << " meters in Carbon Dioxide.\n";
	}
	else if (choice == 2) {
		cout << "The sound travels " << numSeconds * 331.5 << " meters in Air.\n";
	}
	else if (choice == 3) {
		cout << "The sound travels " << numSeconds * 972 << " meters in Helium.\n";
	}
	else if (choice == 4) {
		cout << "The sound travels " << numSeconds * 1270 << " meters in HYdrogen.\n";
	}

    return 0;
}

