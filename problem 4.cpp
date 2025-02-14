// problem 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
			arr[i][j] = RandomNumbers(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "   ";
		}
		cout << endl;
	}
}
int ColsSum(int arr[3][3], short Rows, short ColsNumber)
{
	int Sum = 0;
	for (short i = 0; i <= Rows - 1; i++)
	{
		Sum += arr[i][ColsNumber];
	}
	return Sum;
}

void SumEachColInArray(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (short i = 0; i < Cols; i++)
	{
		arrSum[i] = ColsSum(arr, Rows, i);
	}
}

void PrintEachColsSum(int arr[3],short Cols)
{
	cout << "\nThe the following are the sum of each col in the matrix:\n";
	for (short i = 0; i < Cols; i++)
	{
		cout << "Column " << i + 1 << " Sum = " << arr[i] << endl;
	}
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[3][3];
	int arrSum[3];

	Fill3x3MatrixWithRandomNumbers(arr, 3, 3);

	cout << "\n The folowing is a 3x3 random matrix: \n";
	PrintMatrix(arr, 3, 3);

	SumEachColInArray(arr, arrSum, 3, 3);

	PrintEachColsSum(arrSum, 3);
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
