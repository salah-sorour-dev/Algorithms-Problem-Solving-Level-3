// problem 39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string JoinString(vector<string> vStrings, string Separator)
{
	string S1 = "";
	for (string& String : vStrings)
	{
		S1 = S1 + String + Separator;
	}
	return S1.substr(0, S1.length() - Separator.length());  // remove last separator
}

string JoinString(string arrString[], short Length, string Separator)
{
	string S1 = "";

	for (short i = 0; i < Length; i++)
	{
		S1 = S1 + arrString[i] + Separator;
	}
	return S1.substr(0, S1.length() - Separator.length());
}


int main()
{
	vector<string> vStrings = { "Salah", "Youness", "Sofian" };
	string arrString[] = { "Salah", "Youness", "Sofian" };

	cout << "\nVector After Join:\n";
	cout << JoinString(vStrings, "##");

	cout << "\nArray After Join:\n";
	cout << JoinString(arrString, 3, "##");

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
