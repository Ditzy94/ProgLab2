// Prog13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void leftShift(int numArray[], int arrSize)
{
	int index = 0;
	int temp = numArray[index];

	while (index != arrSize - 1)
	{
		numArray[index] = numArray[index + 1];
		index++;
	}

	numArray[arrSize - 1] = temp;

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
	int arrSize = 5;
	int numArray[] = { 11, 7, 33, 23, 51 };

	//just put in a couple of shift so its easy to see that it works
	cout << "Original array: ";
	printArray(numArray, arrSize);

	cout << endl << "First left shift ";
	leftShift(numArray, arrSize);
	printArray(numArray, arrSize);

	cout << endl << "Second left shift: ";
	leftShift(numArray, arrSize);
	printArray(numArray, arrSize);

	cout << endl << "Third left shift: ";
	leftShift(numArray, arrSize);
	printArray(numArray, arrSize);

	system("pause");

}
