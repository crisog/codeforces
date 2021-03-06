#include "pch.h"
#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;


	bool sortit(const pair<int, int> &a,
		const pair<int, int> &b)
	{
		return (a.second > b.second);
	}
		
	int main()
	{
		pair<int, int> P;
		vector<pair<int, int>> stack;
		long max, matches = 0;
		int rows;
		cin >> max >> rows;

		for (int i = 0; i < rows; i++)
		{
			cin >> P.first >> P.second;
			stack.push_back(P);
		}
		sort(stack.begin(), stack.end(), sortit);

		for (int i = 0; i < rows; i++)
		{
			if (max > 0) {
				if (stack[i].first >= max) {
					matches += max * stack[i].second;
					cout << matches;
					return 0;
				}
				else if (stack[i].first < max) {
					matches += stack[i].first * stack[i].second;
					max -= stack[i].first;
				}
			}
		}
		cout << matches;
	}


