#include <bits/stdc++.h>
#define ll long long
using namespace std;

void drawgrid(int rows, int colum)
{
	bool grid[rows][colum];
	int b, w;
	if ((rows * colum) % 2 == 0)
	{
		b = rows * colum / 2;
		w = b-1;
	}
	else
	{
		b = (rows*colum/2) +1;
		w = b-1;
	}
	cout << b << ' ' << w << '\n';
}


int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		drawgrid(n, m);
	}
}
