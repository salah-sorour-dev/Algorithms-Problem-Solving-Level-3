// problem 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			printf("%0*d   ", 2, arr[i][j]);
			//cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

short CountNumberInMatrix(int arr[3][3], int NumberCount, short Rows, short Cols)
{
	short Counter = 0;

	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (arr[i][j] == NumberCount)
				Counter++;
		}
	}

	return Counter;
	
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {9, 1,0}, {9,9,3}, {0,9,9} };
	int NumberCount;

	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nEnter the Number to count in matrix : ";
	cin >> NumberCount;

	cout << "\nNumber " << NumberCount << " count in matrix is " << CountNumberInMatrix(Matrix1, NumberCount, 3, 3);
	cout << endl;



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
