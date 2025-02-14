// problem 23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


string ReadString()
{
	string S1;
	cout << "Please enter your string? \n";
	getline(cin, S1);
	return S1;
}

void PrintFirstLetterOfEachWorld(string S1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			cout << S1[i] << endl;
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
}

int main()
{
	PrintFirstLetterOfEachWorld(ReadString());


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
