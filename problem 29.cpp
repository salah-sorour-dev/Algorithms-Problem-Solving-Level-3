// problem 28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


string ReadString()
{
	string S1;
	cout << "Please enter String? \n";
	getline(cin, S1);
	return S1;
}

enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
{
	if (WhatToCount == enWhatToCount::All)
	{
		return S1.length();
	}

	short Counter = 0;

	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
			Counter++;

		if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))
			Counter++;
	}

	return Counter;
	
}

int CapitalLettersCount(string S1)
{
	int CapitalLettersCount = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (isupper(S1[i]))
			CapitalLettersCount++;
	}

	return CapitalLettersCount;
}

int SmallLettersCount(string S1)
{
	int SmallLettersCount = 0;
	for (short i = 0; i < S1.length(); i++)
	{

		if (!isupper(S1[i]))
			SmallLettersCount++;
	}

	return SmallLettersCount;
}


int main()
{
	string S1 = ReadString();
	
	

	cout << "\nString Lenght = " << CountLetters(S1) << endl;
	cout << "\nCapital Letters Count = " << CountLetters(S1, enWhatToCount::CapitalLetters) << endl;
	cout << "\nSmall Letters Count = " << CountLetters(S1, enWhatToCount::SmallLetters) << endl;

	system("pause>0");

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
