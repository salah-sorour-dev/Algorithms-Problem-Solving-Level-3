// problem 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void PrintFibonacciUsingLoop(int Number, int Prev1, int Prev2)
{
	int FibNumber = 0;


	if (Number > 0)
	{
		FibNumber = Prev2 + Prev1;
		Prev2 = Prev1;
		Prev1 = FibNumber;
		cout << FibNumber << "    ";

		PrintFibonacciUsingLoop(Number - 1, Prev1, Prev2);

	}
}

int main()
{
	PrintFibonacciUsingLoop(10, 0, 1);

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
