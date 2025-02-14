// problem 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int RandomNumbers(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void Fill3x3MatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumbers(1, 10);
		}
	}
}

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

void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleRow = Rows / 2;
	for (short i = 0; i < Cols; i++)
	{
		printf("%0*d   ", 2, arr[MiddleRow][i]);
	}
	cout << "\n";
}

void PrintMiddleColOfMatrix(int arr[3][3], short Rows, short Cols)
{
	short MiddleCol = Cols / 2;
	for (short i = 0; i < Rows; i++)
	{
		printf("%0*d   ", 2, arr[i][MiddleCol]);
	}
	cout << "\n";
}

int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];

	Fill3x3MatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The folowing is a 3x3 random matrix1: \n";
	PrintMatrix(arr, 3, 3);

	cout << "\nMiddle Row Of Matrix: \n";
	PrintMiddleRowOfMatrix(arr, 3, 3);

	cout << "\nMiddle Col Of Matrix: \n";
	PrintMiddleColOfMatrix(arr, 3, 3);

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
