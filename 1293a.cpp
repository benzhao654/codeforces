#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, s, k, c, l, h, mid, ansl, ansr;
		bool open[1000];
		cin >> n >> s >> k;
		for (int i = 0; i < n; i++)
			open[i] = true;
		for (int i = 0; i < k; i++)
		{
			cin >> c;
			open[c] = false;
		}
		if (open[s]) return 0;
		
		l = 0;
		h = s-2;
		while (l <= h)
		{
			
			mid = l + (h-l)/2;
			if (open[mid])
			{
				l = mid+1;
				ansl = mid;
			}
			else
				h = mid-1;
		}
		
		l = s;
		h = n-1;
		while (l <= h)
		{
			
			mid = l + (h-l)/2;
			if (open[mid])
			{
				ansr=mid;
				h = mid-1;
			}
			else
				l = mid+1;
		}
		cout << min(s-1-ansl, ansr-s+1) << '\n';
		
	}
}
