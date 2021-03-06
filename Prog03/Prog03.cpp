// Prog03.cpp : Defines the entry point for the console application.
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

void findElement(int numArray[], int arrSize)
{
	int target;
	bool foundIt = false;

	cout << "What element would you like to search for? ";
	cin >> target;

	for (int index = 0; index < arrSize; index++)
	{
		system("cls");

		if (numArray[index] == target)
		{
			cout << "I found " << target << " at index " << index << endl;
			foundIt = true;
			system("pause");
			break;
		}

	}
	if (foundIt == false)
	{
		cout << "-1" << endl << " ie. " << target << " was not found in the array. " << endl;
		system("pause");
	}

}

int main()
{
	const int arrSize = 10;
	int numArray[arrSize];

	populateArray(numArray, arrSize);
	findElement(numArray, arrSize);

	return 0;
}

