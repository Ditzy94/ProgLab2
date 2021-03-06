// Prog06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int countEven(int numArray[], int arrSize)
{
	int evenCount = 0;

	for (int index = 0; index < arrSize; index++)
	{
		if (numArray[index] % 2 == 0)
		{
			evenCount++;
		}
	}

	return evenCount;
}

int countOdd(int numArray[], int arrSize)
{
	int oddCount = 0;

	for (int index = 0; index < arrSize; index++)
	{
		if (numArray[index] % 2 == 1)
		{
			oddCount++;
		}
	}

	return oddCount;
}

int main()
{
	int arrSize = 6;
	int numArray[] = { 1, 24, 5, 21, 18, 17 };

	cout << "Total number of even elements in your array: " << countEven(numArray, arrSize) << endl;
	cout << "Total number of odd elements in your array: " << countOdd(numArray, arrSize) << endl;


	system("pause");
	return 0;
}