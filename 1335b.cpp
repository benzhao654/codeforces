#include <bits/stdc++.h>
#define ll long long
using namespace std;

int diffchar(string aa){
     int c_arr[MAX_CHAR] = {0};
     int i, count = 0;
     for( i = 0; a[i] != '\0'; i++){
         c_arr[a[i] - 'a'] = 1;
     }    
     for( i = 0; i < MAX_CHAR; i++){
         count += c_arr[i];
     }
     return count;
}


int main()
{
	ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, a, b;
		cin >> n >> a >> b;
		string output ("a");
		string substring ("a");
		int
		
		for (int i = 1; i < n; i++)
		{
			if(i < b)
				output.pushback(output.back()+1);
			else
			{
				
			
			
		}
		 
		/*
		 * 
		for (int i = 1; i < a; i++)
		{
			
			if (len < b)
				substring.push_back(substring.back()+1);
			else
				substring.push_back(substring[len-b]);
			len++;
		}
		cout << substring << endl;
		*/
		
		
		
		
	}
	
	
}
