#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int temp;
	int x, y;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> temp;
			if (temp == 1)
			{
				x = j + 1;
				y = i + 1;
			}
		}
	}
	
	cout << abs(x - 3) + abs(y - 3) << '\n';
	
}
