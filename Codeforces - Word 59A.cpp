// Codeforces - Word 59A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int upper = 0, lower = 0;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		if (isupper(word[i])) {
			upper++;
		}
		else {
			lower++;
		}
	}

	if (upper > lower) {
		for (int i = 0; i < word.size(); i++)
		{
			word[i] = toupper(word[i]);
		}
	}
	else {
		for (int i = 0; i < word.size(); i++)
		{
			word[i] = tolower(word[i]);
		}
	}
	cout << word;
}