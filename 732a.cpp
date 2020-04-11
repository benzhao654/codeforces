#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	int k, r, remain, count;
	cin >> k >> r;
	remain = k % 10;
	
	
	
	for (int i = 1; i < 10; i++)
	{
		if ((i*r) % 10 == remain)
		{
			
			count = i;
			break;
		}
	}
		
	cout << count << '\n';
	
		
	
}
