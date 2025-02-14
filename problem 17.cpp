// problem 17.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

bool IsNumberExist(int Matrix[3][3], int Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Rows; j++)
		{
			if (Matrix[i][j] == Number)
			{
				return true;
			}
		}
	}

	return false;
}




int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {4,0,12},{4,55,9},{87,0,9} };
	int Number = 0;

	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nEnter the number to look for in matrix? ";
	cin >> Number;

	if (IsNumberExist(Matrix1, Number, 3, 3))
		cout << "\nYes. it is there.\n";
	else
		cout << "\nNo. it's NOT there.\n";

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
