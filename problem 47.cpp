// problem 47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string ClientFileName = "Client.txt";
struct sClient {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

sClient ReadNewClient()
{
	sClient Client;

	cout << "Enter AccountNumber? ";
	getline(cin >> ws, Client.AccountNumber);

	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);

	cout << "Enter Name? ";
	getline(cin, Client.Name);

	cout << "Enter Phone? ";
	getline(cin, Client.Phone);

	cout << "Enter AccountBallance? ";
	cin >> Client.AccountBalance;


	return Client;
}

string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
	string stClientRecord = "";

	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);

	return stClientRecord;
}

void AddDataToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open())
	{
		MyFile << stDataLine << "\n";

		MyFile.close();

	}
}

void AddNewClient()
{
	sClient Client;
	Client = ReadNewClient();
	AddDataToFile(ClientFileName, ConvertRecordToLine(Client));
}

void AddClient()
{

	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "\nAdding New Client: \n\n";

		AddNewClient();
		cout << "\n\nClient Added Successfully, do you want to add more Clients? Y/N? ";

		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClient();

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
