// problem 16.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

short CountNumberInMatrix(int Matrix1[3][3], int Number, short
	Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				NumberCount++;
			};
		}
	}
	return NumberCount;
}

short IsMatrixSparce(int arr[3][3], short Rows, short Cols)
{
	short MatrixSize = Rows * Cols;

	return (CountNumberInMatrix(arr, 0, 3, 3) >= ceil((float)MatrixSize / 2));
}



int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {0,0,12},{4,0,9},{0,0,9} };

	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	if (!IsMatrixSparce(Matrix1, 3, 3))
		cout << "\nNo. It's NOT Sprace.\n";
	else
		cout << "\nYes. It's Sprace.\n";

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
