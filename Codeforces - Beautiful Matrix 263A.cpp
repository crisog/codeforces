// Codeforces - Beautiful Matrix 263A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	int matriz[6][6];
	int ans = 0;
	for (int f = 0; f < 5; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			cin >> matriz[f][c];
			if (matriz[f][c] == 1) {
				ans = abs((2 - f) + (2 - c));
			}
		}
	}
	cout << ans;
	/*for (int f = 0; f < 5; f++)
	{
		for (int c = 0; c < 5; c++)
		{
			cout << matriz[f][c];
		}
		cout << "\n";
	}*/
}