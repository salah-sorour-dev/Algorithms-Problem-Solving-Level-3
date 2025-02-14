// problem 37.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

vector <string> SplitString(string S1, string delim)
{
	short pos = 0;
	string sWord;
	vector<string> vSplit;

	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (!sWord.empty())
		{
			vSplit.push_back(sWord);
		}
		S1.erase(0, pos + delim.length());
	}

	if (!S1.empty())
	{
		vSplit.push_back(S1);
	}

	return vSplit;

}


int main()
{
	//string S1 = ReadString();

	vector<string> vSplit;

	string S2 = "Salah$,$Sofian$,$Youness";

	vSplit = SplitString(S2, "$,$");

	cout << "\nTokens = " << vSplit.size() << endl;

	for (string& Split : vSplit)
	{
		cout << Split << endl;
	}

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
