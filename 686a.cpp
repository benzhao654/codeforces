#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	ll n, packs, mald;
	cin >> n >> packs;
	mald = 0;
	for (int i = 0; i < n; i++)
	{
		char op;
		ll d;
		cin >> op >> d;
		
		if(op == '+')
			packs += d;
		else
		{
			if (packs < d)
				mald++;
			else
				packs-=d;
		}
	}
	cout << packs << ' ' << mald << '\n';
		
}
