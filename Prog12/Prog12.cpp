// Prog12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void reverseArr(int theArray[], int arrSize)
{
	int index;
	int start = 0;
	int end = arrSize - 1;

	while (start < end)
	{
		int temp = theArray[start];
		theArray[start] = theArray[end];
		theArray[end] = temp;
		start++;
		end--;
	}
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
	int arrSize = 7;
	int numArray[] = { 1, 7, 33, 2, 52, 49, 99 };

	cout << "Original array: ";
	printArray(numArray, arrSize);

	reverseArr(numArray, arrSize);

	cout << endl << "Reversed array: ";
	printArray(numArray, arrSize);
	cout << endl;

	system("pause");
	return 0;
}

