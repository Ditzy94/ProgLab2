// Prog09.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void delElement(int theArray[], int arrSize, int targetIndex)
{

	for (int index = targetIndex; index <= arrSize; index++)
	{
		theArray[index] = theArray[index + 1];
	}

	theArray[arrSize - 1] = 0;


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
	int numArray[] = { 2, 19, 5, 19, 14, 17, 49, 66, 78, 36, 8, 55 };
	int targetIndex = 0;

	do
	{
		cout << "Please enter an index from 0 - 11: " << endl;
		cin >> targetIndex;
	} while ((targetIndex < 0) || (targetIndex > 11));

	cout << "Array prior to deletion: ";
	printArray(numArray, arrSize);

	cout << "Array after deletion: ";
	delElement(numArray, arrSize, targetIndex);
	printArray(numArray, arrSize);

	system("pause");
	return 0;

}

