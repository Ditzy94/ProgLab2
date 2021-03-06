// Prog14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void printPairs(int product, int numArray[], int arrSize)
{
	int index;
	int j;
	int curr;
	bool existsPairs = false;

	for (index = 0; index < arrSize; index++)
	{
		curr = numArray[index];

		for (j = 0; j < arrSize; j++)
		{
			if (curr*numArray[j] == product)
			{
				cout << curr << " , " << numArray[j] << endl;
				existsPairs = true;
			}
		}
	}
	if (existsPairs == false)
	{
		cout << "No pairs existed that resulted in the product " << product << endl;
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
	int arrSize = 5;
	int numArray[] = { 5, 3, 10, 2, 4 };
	int product;

	cout << "Please enter the product you are looking for: ";
	cin >> product;
	cout << endl;

	printPairs(product, numArray, arrSize);

	//printArray(numArray, arrSize);

	system("pause");

	return 0;
}
