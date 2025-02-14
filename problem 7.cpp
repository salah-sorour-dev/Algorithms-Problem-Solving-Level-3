// problem 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void Fill3x3MatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
	int Counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Counter++;
			arr[i][j] = Counter;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << arr[i][j] << "   ";
		}
		cout << endl;
	}
}

void TransposeMatrix(int arr[3][3], int arrTranspose[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTranspose[i][j] = arr[j][i];
		}
	}
}

int main()
{
	int arr[3][3];
	int arrTranspose[3][3];

	Fill3x3MatrixWithOrderedNumbers(arr, 3, 3);

	cout << "The folowing is 3x3 Ordered Matrix : \n";
	PrintMatrix(arr, 3, 3);

	cout << endl;

	cout << "The folowing is 3x3 Transpose Matrix : \n";
	TransposeMatrix(arr,arrTranspose, 3, 3);
	PrintMatrix(arrTranspose, 3, 3);

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
