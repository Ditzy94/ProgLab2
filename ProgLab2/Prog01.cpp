// Prog01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int numArray[10];
	int currInput;
	int i, j; 

	for (i = 0; i < 10; i++)
	{
		cout << "Please enter an integer to be added to the array: " << endl;
		cin >> currInput;

		numArray[i] = currInput;
		system("cls");

	}

	for (j = 0; j < 10; j++)
	{
		cout << numArray[j] << " ";
	}

	cout << endl;

	system("pause");
	return 0;
}

