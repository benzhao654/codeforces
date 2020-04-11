#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int n, h, counter;
	int heights[1000];
	cin >> n >> h;
	counter = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> heights[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		if (heights[i] > h)
			counter += 2;
		else
			counter++;
	}
	cout << counter;
}
