
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		int n;
		string x;
		cin >> n >> x;
		string a(n, '0'), b(n, '0');
		for (int i = 0; i < n; ++i)
		{
			if (x[i] == '1')
			{
				a[i] = '1';
				b[i] = '0';
				for (int j = i + 1; j < n; ++j)
				{
					b[j] = x[j];
				}
				break;
			}
			if (x[i] == '0')
			{
				a[i] = b[i] = '0';
			}
			else if (x[i] == '2')
			{
				a[i] = b[i] = '1';
			}
		}
		cout << a << endl << b << endl;
	}
	
	return 0;
}

/*
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
		int len;
		string a, b, num;
		cin >> len;
		cin >> num;
		for (int i = 0; i < len; i++)
		{
			if (num[i] == '0')
			{
				a[i] = b[i] = '0';
			}
			else if (num[i] == '2')
			{
				a[i] = b[i] = '1';
			}
			else
			{
				a[i] = '1';
				b[i] = '0';
			}
			
		}
		cout << a << endl << b << endl;
		
	}
	
	
}
*/
