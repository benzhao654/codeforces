#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t;

void findstring(int n, int k)
{
	int b1, b2, counter1, counter2;
	b1 = n - 1;
	b2 = n;
	counter1 = 0;
	counter2 = 1;
	for (int i = 0; i < k; i++)
	{
		if (counter1 == counter2)
		{
			b1--;
			counter2 = counter1 + 1;
			counter1 = 0;
		}
		counter1++;
	}
	for (int i = 0; i < counter1 - 1; i++)
	{
		b2--;
	}
	string output;
	for (int i = 1; i <=n; i++)
	{
		if(i == b1 || i == b2)
			cout << 'b';
		else
			cout << 'a';
	}
	cout << endl;
	
}

int main()
{
	ios::sync_with_stdio(0);
	cin >> t;
	while (t--)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		findstring(temp1, temp2);
	}
	
}
