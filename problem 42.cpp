// problem 42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String? \n";
	getline(cin, S1);
	return S1;
}


string ReplaceWordsInString(string S1, string StringToReplace, string ReplaceTo)
{
	short pos = S1.find(StringToReplace);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, StringToReplace.length(), ReplaceTo);

		pos = S1.find(StringToReplace); //find next
	}

	return S1;
}



int main()
{
	string S1 = ReadString();
	string StringToReplace = "Morocco";
	string ReplaceTo = "KSA";

	cout << "\nOriginal String : \n" << S1;
	cout << "\nString After Replace : \n";
	cout << ReplaceWordsInString(S1, StringToReplace, ReplaceTo) << endl;

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
