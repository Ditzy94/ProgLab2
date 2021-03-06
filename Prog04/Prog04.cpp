// Prog04.cpp : Defines the entry point for the console application.
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

void findMax(int numArray[], int arrSize)
{
	int largest = numArray[0];

	for (int index = 0; index < arrSize; index++)
	{
		if (numArray[index] > largest)
		{
			largest = numArray[index];
		}
	}

	cout << "The largest number in your array is: " << largest << endl;
}
void findMin(int numArray[], int arrSize)
{
	int smallest = numArray[0];

	for (int index = 0; index < arrSize; index++)
	{
		if (numArray[index] < smallest)
		{
			smallest = numArray[index];
		}
	}
	cout << "The smallest number in your array is : " << smallest << endl;

}

int main()
{
	const int arrSize = 10;
	int numArray[arrSize];

	populateArray(numArray, arrSize);
	findMax(numArray, arrSize);
	findMin(numArray, arrSize);

	system("pause");
	return 0;
}
