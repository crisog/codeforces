// Codeforces - Helpful Math 339A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string a;
	vector<int> v;

	cin >> a;
	for (int i = 0; i < a.size(); i=i+2)
	{
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	a = "";
	for (int i = 0; i < v.size(); i++)
	{
		a += (v[i]);
		if (i != v.size() - 1) {
			a += "+";
		}
	}
	cout << a;

}
