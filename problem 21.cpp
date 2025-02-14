// problem 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void PrintFibonacciUsingLoop(int Number)
{
	int FibNumber = 0;
	int prev2 = 0, prev1 = 1;
	cout << "1    ";

	for (int i = 2; i <= Number; ++i)
	{
		FibNumber = prev2 + prev1;
		cout << FibNumber << "    ";
		prev2 = prev1;
		prev1 = FibNumber;
	}
}

int main()
{
	PrintFibonacciUsingLoop(10);

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
