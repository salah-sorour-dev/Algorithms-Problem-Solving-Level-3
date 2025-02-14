// problem 41.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

string ReverseWordsInString(string S1)
{
	vector<string> vString;
	string S2 = "";

	vString = SplitString(S1, " ");

	//declary iterator
	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;

		S2 += *iter + " ";
	}
	S2 = S2.substr(0, S2.length() - 1); // remove last space

	return S2;
}



int main()
{
	string S1 = ReadString();
	
	cout << "\nString After Reverse :\n";
	cout << ReverseWordsInString(S1) << endl;

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
