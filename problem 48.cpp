// problem 48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;
const string FileName = "C:\\Users\\SALA77\\OneDrive\\Bureau\\Projects-Github\\Problem-solving-with-C++\\level 3\\problem 48\\problem 48\\Client.txt";
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};


vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;

	short pos = 0;
	string sWord;

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

sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
	sClient Client;
	vector<string> vClientData;

	vClientData = SplitString(Line, Separator);

	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

	return Client;
}

vector<sClient> LoadDataFromFileToVector(string FileName)
{
	vector<sClient> vClient;
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string Line;
		sClient Client;

		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
			vClient.push_back(Client);
		}
		MyFile.close();
	}
	return vClient;
}
void PringClientRecords(sClient Client)
{
	cout << "| " << left << setw(15) << Client.AccountNumber;
	cout << "| " << left << setw(10) << Client.PinCode;
	cout << "| " << left << setw(20) << Client.Name;
	cout << "| " << left << setw(12) << Client.Phone;
	cout << "| " << left << setw(12) << Client.AccountBalance;
}

void PrintAllClientData(vector<sClient> vClient)
{
	cout << "\n\t\t\t\t\t\tClient List (" << vClient.size() << ") Client(s)\n";
	cout << "\n___________________________________________";
	cout << "___________________________________________\n";

	cout << "| " << left << setw(15) << "AccountNumber";
	cout << "| " << left << setw(10) << "PinCode";
	cout << "| " << left << setw(20) << "Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "AccountBalance";

	cout << "\n___________________________________________";
	cout << "___________________________________________\n";

	for (sClient Client : vClient)
	{
		PringClientRecords(Client);
		cout << endl;
	}

	cout << "\n___________________________________________";
	cout << "___________________________________________\n";
}

int main()
{
	vector<sClient> vClient = LoadDataFromFileToVector(FileName);
	

	PrintAllClientData(vClient);

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
