// Prog02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void populateArray(int numArray[], int arrSize)
{
	int i;
	int currInput;

	for (i = 0; i < arrSize; i++)
	{
		cout << "Please enter an integer to be added to the array: " << endl;
		cin >> currInput;

		numArray[i] = currInput;
		system("cls");

	}
}

void printNeg(int numArray[], int arrSize)
{
	int k;

	cout << "The negative elements in your array are: ";
	for (k = 0; k < arrSize; k++)
	{
		if (numArray[k] < 0)
		{
			cout << numArray[k] << " ";
		}
	}
	cout << endl;
}

int main()
{
	const int arrSize = 10;
	int numArray[arrSize];

	populateArray(numArray, arrSize);
	printNeg(numArray, arrSize);

	system("pause");

	return 0;
}

