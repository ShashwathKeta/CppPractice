// functionPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
# include <cmath>

using namespace std;

double fallingDistance(double time);
double getSales(string name);
void findHighest(double sales1, double sales2, double sales3, double sales4);
bool isPrime(int num);
void multiPrint(int n, char c);
int add3(int one, int two, int three);
double presentValue(double input, double rate, int years);
void splitFunction(int in[]);

int main()
{
	cout << "Function Practice: 4: \n\n";

	for (int i = 0; i <= 10; i++) {
		cout << "The falling distance for " << i << " is " << fallingDistance(i) << "\n";
	}

	cout << "\n\nFunction Practice 5: ";
	double northeast, southeast, northwest, southwest;

	cout << "\nEnter the quartly sales for these following divisions: \n";
	northeast = getSales("northeast");
	southeast = getSales("southeast");
	northwest = getSales("northwest");
	southwest = getSales("southwest");

	findHighest(northeast, southeast, northwest, southwest);

	int num;
	cout << "\n\nFunction Practice 10: isPrime Function: ";
	while (num != -1) {
		cout << "Enter a number to check if its prime, enter -1 to quit: ";
		cin >> num;
		if (num == -1) {
			break;
		}
		if (isPrime(num)) {
			cout << num << " is Prime.";
		}
		else {
			cout << num << " is not Prime.";
		}
	}

	cout << "\n\nFunction Practice 11: ";
	double futureInput;
	double rateInput;
	int yearsInput;

	while (1==1) {
		cout << "Enter the future input, to end it enter -1";
		cin >> futureInput;
		if (futureInput == -1)break;
		cout << "Enter the rate inpute: ";
		cin >> rateInput;
		cout << "Enter the number of years it should sit: ";
		cin >> yearsInput;
		cout << "\nThe present value you should deposit is " << presentValue(futureInput, rateInput, yearsInput) << ".";
	}

    return 0;
 }

double fallingDistance(double time) {
	return .5*9.8*time*time;
}

double getSales(string name) {
	double sales = 0;
	while (sales <= 0) {
		cout << "Enter division " << name << " sales: ";
		cin >> sales;
	}
	return sales;
}

void findHighest(double northeast, double southeast, double northwest, double southwest) {
	if (northeast > southeast && northeast > southwest && northeast > northwest) {
		cout << "The winning region is northeast with " << northeast << " dollars in sales.\n";
	}
	if (southeast > northeast && southeast > northwest && southeast > southwest) {
		cout << "The winning region is southeast with " << southeast << " dollars in sales.\n";
	}
	if (northwest > southeast && northwest > northeast && northwest > southwest) {
		cout << "The winning region is northwest with " << northwest << " dollars in sales.\n";
	}
	if (southwest > southeast && southwest > northwest && southeast > northeast) {
		cout << "The winning region is southwest with " << southwest << " dollars in sales.\n";
	}
}

bool isPrime(int num) {
	for (int i = 2; i <= num / 2;i++) {
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}

void multiPrint(int n, char c) {
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < i;j++) {
			cout << c << " ";
		}
		cout << endl;
	}
}

int add3(int one, int two, int three) {
	return one + two + three;
}

double presentValue(double future, double rate, int years) {
	return (future / pow(1 + rate, years));
}

void splitFunction(int in[]) {
	int i;
	int arr1[5], arr2[5];
	while(i<5) {
		arr1[i] = in[i];
		i++;
	}
	while (i < 10) {
		arr2[i] = in[i];
		i++;
	}
	cout << "First Array";
	for (int j = 0; j < 5; j++) {
		cout << arr1[j] << " ";
	}
	cout << "Second Array";
	for (int k = 0; k < 5; k++) {
		cout << arr2[k] << " ";
	}
}