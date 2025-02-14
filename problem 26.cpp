// problem 26.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

string UpperAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
			S1[i] = toupper(S1[i]);
	}

	return S1;
}


string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
			S1[i] = tolower(S1[i]);
	}

	return S1;
}

int main()
{
	string S1 = ReadString();

	cout << "\nString after conversion to Upper: \n";
	S1 = UpperAllString(S1);
	cout << S1 << endl;

	cout << "\nString after conversion to Lower: \n";
	S1 = LowerAllString(S1);
	cout << S1 << endl;

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
