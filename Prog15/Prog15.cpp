// Prog15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//count words, whether valid or not
int countWords(char arr[])
{
	char current = arr[0];
	int noWords = 1;

	for (int i = 0; current != '\0'; current = arr[++i])
	{

		if ((arr[i] == ' ') && (arr[i + 1] != ' '))
		{
			noWords++;
		}
	}

	return noWords;
}
//counts whether words are valid
int checkValid(int noWords, char arr[])
{
	char current = arr[0];
	bool isValid = true;

	for (int i = 0; current != '\0'; current = arr[++i])
	{
		//current is not alpha
		if (!((current <= 'z' && current >= 'a') || (current <= 'Z' && current >= 'A')) && (current != ' '))
		{
			isValid = false;
		}

		else if (arr[i] == ' ' && isValid == false)
		{
			noWords--;
			isValid = true;
		}
	}
	return noWords;
}
void printArr(char someWords[])
{
	char current = someWords[0];

	for (int i = 0; current != '\0'; current = someWords[++i])
	{
		cout << current;
	}

	cout << endl;
}
int main()
{
	char someWords[] = "This li8ttle se4ntence is a big test";

	int noWords = countWords(someWords);
	int result = checkValid(noWords, someWords);

	cout << "The sentence is: ";
	printArr(someWords);

	cout << "No of words: " << result << endl;


	system("pause");
	return 0;
}

