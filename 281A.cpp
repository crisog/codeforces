// Codeforces - Word Capitalization 281A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string w;
	cin >> w;

	w[0] = toupper(w[0]);

	cout << w;

}
