// problem 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int MaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int Max = Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] > Max)
			{
				Max = Matrix[i][j];
			}
		}
	}
	return Max;
}

int MinNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int Min = Matrix[0][0];
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix[i][j] < Min)
			{
				Min = Matrix[i][j];
			}
		}
	}
	return Min;
}


int main()
{
	srand((unsigned)time(NULL));

	int Matrix1[3][3] = { {4,48,12},{11,55,9},{87,21,8} };

	cout << "\n Matrix1: \n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "\nMax Number is : " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;

	cout << "\nMinimum Number is : " << MinNumberInMatrix(Matrix1, 3, 3) << endl;

	

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
