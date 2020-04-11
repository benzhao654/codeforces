#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
int wires[100];
int main()
{
	ios::sync_with_stdio(0);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> wires[i];
	cin >> m;
	
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		if (x != 0 && x != n-1)
		{
			wires[x-1] += y;
			wires[x+1] += wires[x] - y - 1;
			wires[x] = 0;
		}
		else if (x == 0)
		{
			wires[x+1] += wires[x] - y - 1;
			wires[x] = 0;
		}
		else
		{
			wires[x-1] += y;
			wires[x] = 0;
		}
	}
	
	for (int i = 0; i < n; i++)
		cout << wires[i] << '\n';
	
}
