// Codeforces - Stones on the Table 266A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 0, c = 0;
	char x;
	vector<char> colors;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		colors.push_back(x);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if (colors[i] == colors[i + 1]) {
			c++;
		}
		else {
			continue;
		}
	}
	cout << c;
}