// problem 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


bool IsPalinromMatrix(int Matrix[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols / 2; j++)
		{
			if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
			{
				return false;
			}
		}
	}

	return true;
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {4,48,4},{11,55,11},{8,21,8} };

	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);


	if (IsPalinromMatrix(Matrix1, 3, 3))
		cout << "\nYes. Matrix is Palinrom.\n";
	else
		cout << "\nNo. Matrix is NOT Palindrom.\n";

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
