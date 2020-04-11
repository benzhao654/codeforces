#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;
int coords[100000];

ll distance(ll cord1, ll cord2)
{
	if ((cord1 < 0) != (cord2 < 0))
		return abs(coords[cord1]) + abs(coords[cord2]);
	else if (cord1 < 0)
		return abs( abs(coords[cord1]) + abs(coords[cord2]) );
	else
		return abs( coords[cord1] - coords[cord2] );
}

int main()
{
	ios::sync_with_stdio(0);
	
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> coords[i];
	
	for (int i = 0; i < n; i++)
	{
		ll mind;
		if (i == 0)
			mind = distance(0, 1);
		else if (i == n-1)
			mind = distance(n-1, n-2);
		else
			mind = min(distance(i,i-1), distance(i,i+1));
		
		cout << mind << ' ';
		
		cout << max(distance(i, 0), distance(i, n-1)) << '\n';
	}
}
