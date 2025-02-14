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

int SumOfMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

bool IsMatricesEqual(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	return (SumOfMatrix(Matrix1, Rows, Cols) == SumOfMatrix(Matrix2, Rows, Cols));
}

int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3];
	int Matrix2[3][3];

	Fill3x3MatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	Fill3x3MatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\n Matrix2: \n";
	PrintMatrix(Matrix2, 3, 3);


	if (!IsMatricesEqual(Matrix1, Matrix2, 3, 3))
		cout << "\nNo. matrices are NOT Equal.\n";
	else
		cout << "\nYes. Both matrices are Equal.\n";


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
