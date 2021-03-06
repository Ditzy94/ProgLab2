// Prog08.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void addElement(int theArray[], int arrSize, int targetIndex, int newElement)
{
	for (int index = arrSize; index >= targetIndex; index--)
	{
		theArray[index] = theArray[index - 1];
	}

	theArray[targetIndex] = newElement;
}

void printArray(int theArray[], int arrSize)
{
	for (int index = 0; index < arrSize; index++)
	{
		cout << theArray[index] << " ";
	}
	cout << endl;
}

int main()
{
	int arrSize = 12;
	int numArray[] = { 2, 19, 5, 19, 14, 17, 49, 66, 78, 36, 8, 0 };
	int targetIndex = 0;
	int newElement;

	cout << "Please enter the number to add to the array: " << endl;
	cin >> newElement;

	do
	{
		cout << "Please enter an index from 0 - 11: " << endl;
		cin >> targetIndex;
	} while ((targetIndex < 0) || (targetIndex > 11));

	addElement(numArray, arrSize, targetIndex, newElement);

	printArray(numArray, arrSize);

	system("pause");
	return 0;
}

