// HousingCosts.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double rent;
	double phones;
	double utilities;
	double cable;

	cout << "Enter your monthly rent: ";
	cin >> rent;
	
	cout << "Enter your monthly phone bill: ";
	cin >> phones;
	
	cout << "Enter your monthly utility costs: ";
	cin >> utilities;

	cout << "Enter your monthly cable costs: ";
	cin >> cable;

	cout << "Your total monthly cost is " << rent + phones + utilities + cable << "\n";
	cout << "Your total yearly cost is " << 12*(rent + phones + utilities + cable) << "\n";

    return 0;
}

