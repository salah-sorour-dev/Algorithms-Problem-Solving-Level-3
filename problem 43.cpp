// problem 43.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector<string> SplitString(string S1, string Delim)
{
	short pos = 0;
	string sWord;
	vector<string> vString;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}

		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}



string JoinString(vector<string> vString, string Delim)
{
	string S1;
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string LowerAllString(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		S1[i] = tolower(S1[i]);
	}
	return S1;
}

string ReplaceWordsInStringUsingSplit(string S1, string StringToReplace, string ReplaceTo, bool MatchCase = true)
{
	vector<string> vString = SplitString(S1, " ");

	for (string& s : vString)
	{
		if (MatchCase)
		{
			if (s == StringToReplace) {
				s = ReplaceTo;
			}
		}
		else
		{
			if (LowerAllString(s) == LowerAllString(StringToReplace))
			{
				s = ReplaceTo;
			}
		}
	}

	return JoinString(vString, " ");
}



int main()
{
	string S1 = ReadString();
	string StringToReplace = "morocco";
	string ReplaceTo = "KSA";

	cout << "\nOriginal String : \n" << S1;

	cout << "\n\nReplace with match case : \n";
	cout << ReplaceWordsInStringUsingSplit(S1, StringToReplace, ReplaceTo) << endl;

	cout << "\nReplace with dont match case : \n";
	cout << ReplaceWordsInStringUsingSplit(S1, StringToReplace, ReplaceTo, false) << endl;

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
