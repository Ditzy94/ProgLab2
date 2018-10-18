// Prog07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void copyContents(int sourceArray[], int destArray[], int arrSize)
{
	for (int index = 0; index < arrSize; index++)
	{
		destArray[index] = sourceArray[index];
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
	int arrSize = 20;
	int sourceArray[] = { 2, 19, 5, 19, 14, 17, 19, 20, 11, 88, 21, 66, 45, 87, 21, 33, 4, 70, 49, 92 };
	int destArray[20];

	copyContents(sourceArray, destArray, arrSize);

	cout << "Source array: ";
	printArray(sourceArray, arrSize);

	cout << "Destination array: ";
	printArray(destArray, arrSize);

	system("pause");
	return 0;
}


