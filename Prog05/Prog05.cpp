// Prog05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>

using namespace std;

int findMax(int numArray[], int arrSize)
{
	int largest = numArray[0];

	for (int index = 0; index < arrSize; index++)
	{
		if (numArray[index] > largest)
		{
			largest = numArray[index];
		}
	}
	return largest;
}

void nextToLargest(int numArray[], int arrSize, int largest)
{
	int nextBiggest = numArray[0];

	for (int index = 0; index < arrSize; index++)
	{
		if ((numArray[index] < largest) && (numArray[index] > nextBiggest))
		{
			nextBiggest = numArray[index];
		}
	}

	cout << "The second largest number in your array is " << nextBiggest << endl;
}

int main()
{
	int arrSize = 6;
	int numArray[] = { 90, 160, 7, 88, 261, 20 };

	int largest = findMax(numArray, arrSize);

	nextToLargest(numArray, arrSize, largest);


	system("pause");
	return 0;
}


