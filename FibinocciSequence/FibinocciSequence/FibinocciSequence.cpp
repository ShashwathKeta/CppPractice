// FibinocciSequence.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n,n1,n2;
	cout << "Enter the number which you want in the fibinocci sequence: ";
	cin >> n;
	n--;

	int fibSeries [100];
	fibSeries[0] = 0;
	fibSeries[1] = 1;

	for(int i=2; i<100; i++){
		fibSeries[i] = fibSeries[i - 1] + fibSeries[i - 2];
	}

	cout << "The fibinacci number is " << fibSeries[n];

    return 0;
}

