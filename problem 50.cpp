// problem 50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

const string ClientsFileName = "C:\\Users\\SALA77\\OneDrive\\Bureau\\Projects-Github\\Problem-solving-with-C++\\level 3\\problem 50\\problem 50\\Client.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;

};

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vClient;

	short pos = 0;
	string sWord;

	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vClient.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}

	if (S1 != "")
	{
		vClient.push_back(S1);
	}

	return vClient;
}

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
	vector<string> vClientData;
	vClientData = SplitString(Line, Separator);

	sClient Client;

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

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

vector<sClient> LoadClientsDataFromFile(string FileName)
{
	vector<sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		sClient Client;
		string Line;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClients.push_back(Client);
		}

		MyFile.close();
	}

	return vClients;
}

bool FindClientByAccountNumber(string AccountNumber, vector<sClient> vClients, sClient& Client)
{
	

	for (sClient C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}
	}
	return false;
}

void PrintClientInfo(sClient Client)
{

	cout << "\nThe following are the client details:\n";

	cout << "\nAccount Number : " << Client.AccountNumber;
	cout << "\nPinCode        : " << Client.PinCode;
	cout << "\nName           : " << Client.Name;
	cout << "\nPhone          : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
	cout << endl;
}

string ReadClientAccountNumber()
{
	string AccNumber;
	cout << "\nPlease Enter Account Number? ";
	cin >> AccNumber;
	return AccNumber;
}

bool MarkClientForDeleteByAccountNumber(string AccountNumber, vector<sClient>& vClients)
{
	for (sClient& C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			C.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

vector<sClient> SaveClientsDataToFile(string FileName, vector<sClient> vClients)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out);

	string DataLine;

	if (MyFile.is_open())
	{
		for(sClient C : vClients)
		{
			if (C.MarkForDelete == false)
			{
				//we only write record that are not mark for delete
				DataLine = ConvertRecordToLine(C);
				MyFile << DataLine << endl;
			}
		}

		MyFile.close();
	}

	return vClients;
}

bool DeleteClientByAccountNumber(string AccNumber, vector<sClient>& vClients)
{
	sClient Client;
	char Answer = 'y';

	if (FindClientByAccountNumber(AccNumber, vClients, Client))
	{
		PrintClientInfo(Client);

		cout << "\n\nAre you sure you want delete this client? y/n? ";
		cin >> Answer;
		if (Answer == 'Y' || Answer == 'y')
		{
			MarkClientForDeleteByAccountNumber(AccNumber, vClients);
			SaveClientsDataToFile(ClientsFileName, vClients);

			vClients = LoadClientsDataFromFile(ClientsFileName);

			cout << "\nClient Deleted Successfully.\n";
			return true;
		}
	}
	else
	{
		cout << "\n\nClient with Account Number (" << AccNumber << ") Not Found!\n";
	}
}

int main()
{
	

	vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

	string AccNumber = ReadClientAccountNumber();

	DeleteClientByAccountNumber(AccNumber, vClients);

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