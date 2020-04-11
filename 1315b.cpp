/*
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a, b;

int find(string s, int len, int money)
{
	if (len == 2)
	{
		if (s[0] == 'A') money -= a;
		else money -= b;
		if (money >= 0) return 1;
		else return 2;
	}
	int i = len-1-1;
	while (s[i] == s[i-1])
	{
		if (i == 1)
		{
			if (s[0] == 'A') money -= a;
			else money -= b;
			if (money >= 0) return 1;
			else return len;
		}
		i--;
	}
	if (s[i] == 'A') money -= a;
	else money -= b;
		
	if (money >= 0) return find(s.substr(0, i), i+1, money);
	else return len;
}


int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int money;
		string s;
		cin >> a >> b >> money;
		cin >> s;
		
		
		
		cout << find(s, s.length(), money) << '\n';
		
		
	}
}
*/


#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a, b;

int find(vector<bool> s, int len, int money)
{
	if (len == 2)
	{
		if (s[0]) money -= a;
		else money -= b;
		if (money >= 0) return 1;
		else return 2;
	}
	int i = len-1-1;
	while (s[i] == s[i-1])
	{
		if (i == 1)
		{
			if (s[0]) money -= a;
			else money -= b;
			if (money >= 0) return 1;
			else return len;
		}
		i--;
		
	}
	if (s[i])
		money -= a;
	else 
		money -= b;
	
	if (money >= 0)
	{
		s.resize(i+1);
		return find(s, i+1, money);
	}
	else
		return len;
}


int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int money;
		char c;
		vector<bool> bruh;
		cin >> a >> b >> money;
		c = getchar();
		while (c != '\n') {
			if (c == 'A') bruh.push_back(true);
			else bruh.push_back(false);
			c = getchar();
		}
		
	
		
		
		cout << find(bruh, bruh.size(), money) << '\n';
		
		
	}
}

