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
		int a, b, money, j, len;
		string s;
		cin >> a >> b >> money;
		cin >> s;
		j = len = 0;
		while (s[j] != '\0')
		{
			len++;
			j++;
		}
		
		for (int i = len-2; i > 0; i--)
		{
			if (s[i] != s[i-1])
			{
				if (s[i] == 'A')
					money -= a;
				else
					money -= b;
			}
			if (money <= 0)
			{
				cout << i;
				break;
			}
		}
		
	}
}
