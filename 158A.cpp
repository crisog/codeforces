// Codeforces - Next Round 158A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int contestants[51];
	int n, k, c = 0, max = 0;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> contestants[i]; 
		if (i + 1 == k) {
			max = contestants[i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (contestants[i] >= max && contestants[i] > 0) {
			c++;
		}
	}

	cout << c;
	return 0;
}