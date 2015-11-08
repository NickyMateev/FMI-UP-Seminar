// Problem 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int n;
	int cols = 1, k = 1;
	bool continueCycle = true;

	cout << "n = ";
	cin >> n;
	
	while (continueCycle)
	{
		for (int col = 1; col <= cols; col++)
		{
			if (k <= n)
			{
				cout << k << " ";
				k++;
			}
			else
			{
				cout << "*" << " ";
			}
		}
		cout << '\n';
		cols++;
		if (k > n)
		{
			continueCycle = false; // we use this, instead of breaking the cycle
		}
	}

    return 0;
}

