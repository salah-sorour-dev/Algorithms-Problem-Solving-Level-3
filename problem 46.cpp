// problem 46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct stClientData {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

vector<string> SplitString(string S1, string Separator)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(Separator)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Separator.length());
	}

	if (S1 != "")
	{
		vString.push_back(S1);
	}

	return vString;
}

stClientData ConvertLineToRecord(string Line, string Separator = "#//#")
{
	stClientData Client;
	vector<string> vClientData;

	vClientData = SplitString(Line, Separator);
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]); //string to double

	return Client;
}


int main()
{
	string S1 = "A150#//#1234#//#Salah Sorour#//#0693548954#//#5000";

	stClientData Client = ConvertLineToRecord(S1);

	cout << "\nLine Record is: \n" << S1;

	cout << "\n\nThe following is the extracted client record:\n";
	cout << "\nAccount Number   = " << Client.AccountNumber;
	cout << "\nPin Code         = " << Client.PinCode;
	cout << "\nName             = " << Client.Name;
	cout << "\nPhone            = " << Client.Phone;
	cout << "\nAccount Balance  = " << Client.AccountBalance;

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
