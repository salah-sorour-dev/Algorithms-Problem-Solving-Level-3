// problem 45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct sClient {
	string AcountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBallance;
};

sClient ReadNewClient()
{
	sClient Client;

	cout << "Enter AccountNumber? ";
	getline(cin, Client.AcountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBallance? ";
	cin >> Client.AccountBallance;

	return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AcountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBallance);

	return stClientRecord;
}

int main()
{
	cout << "\nPlease Enter Client Data: \n";

	sClient Client;
	Client = ReadNewClient();

	cout << "\n\nClient Record for Saving is: \n";
	cout << ConvertRecordToLine(Client);

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
