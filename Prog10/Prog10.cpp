// Prog10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int inputArray[7];
	int countArray[7];
	int elementCount, i, j, count;
	int in;

	//set array size
	cout << "Enter number of elements in array: ";
	cin >> elementCount;

	//populate array
	for (i = 0; i < elementCount; i++)
	{
		cout << "Please enter element: ";
		cin >> in;
		inputArray[i] = in;
		countArray[i] = -1;
	}

	for (i = 0; i < elementCount; i++)
	{
		count = 1;
		for (j = i + 1; j < elementCount; j++)
		{
			if (inputArray[i] == inputArray[j])
			{
				countArray[j] = 0;
				count++;
			}
		}

		if (countArray[i] != 0)
		{
			countArray[i] = count;
		}
	}

	/* Print count of each element */
	for (i = 0; i < elementCount; i++) {
		if (countArray[i] != 0)
		{
			cout << "Element " << inputArray[i] << " has a frequency of " << countArray[i] << endl;
		}
	}

	system("pause");
}
