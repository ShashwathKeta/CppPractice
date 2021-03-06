// ForWhileLoopPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>;

using namespace std;

int main()
{
	cout << "Lab 2: Sum of Numbers: ";

	int sum;
	cout << "\nEnter the number you wish to be summed: ";
	cin >> sum;
	int output=0;

	for (int i = 1; i <= sum; i++) {
		output += i;
	}

	cout << "The sum of all numbers up to " << sum << " is " << output << "\n\nLab 3: Celsius to Fahrenheit Table: \n";

	for (int cels=0; cels < 30; cels++) {
		cout << "Celsius: " << cels << "            Fahrenheit: " << (double)(((9 / 5)*(double)cels) + 32) << "\n";
	}

	double weight;
	cout << "\n\nLab 3: Weight Loss: \nEnter your weight: ";
	cin >> weight;
	for (int i = 1; i < 7; i++) {
		cout << "By the end of month " << i << " you will be at " << weight - (i * 4) << " lbs\n";
	}

	double num;
	cout << "\nLab 4: Pennies for Pay: Enter the number of days in work between 1 and 31: ";
	cin >> num;
	if (num > 31) {
		cout << "Try again but enter a number between 1 and 31: ";
		cin >> num;
	}
	double pay = .01;
	double total = 0;

	for (int i = 0; i < num; i++) {
		cout << "The day is " << i + 1 << " and you made " << pay << " dollars today.\n";
		pay = pay * 2;
		total += pay;
	}
	cout << "The total money made this month is " << total << " dollars. \n\n";

	int random;
	cout << "Lab 5: Random Number Guessing Game: ";
	srand(time(0));
	random = (rand() % 10) + 1;
	int guess;

	while (1 == 1) {
		cout << "Guess a number: ";
		cin >> guess;

		if (guess > random) {
			cout << "Too high, guess again.\n";
		}
		else if (guess < random) {
			cout << "Too low, guess again.\n";
		}
		else if (guess == random) {
			cout << "You got the number! \n";
			break;
		}
	}
}

