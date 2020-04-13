#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool areEqual(int arr1[], int arr2[], int n) 
{ 
  
    // Linearly compare elements 
    for (int i = 0; i < n; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
  
    // If all elements were same. 
    return true; 
}

bool hasrepeats(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (arr[i] == arr[i+1])
			return true;
	}
	return false;
}
int main()
{
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	int before[n];
	int after[n];
	int after2[n];
	for (int i = 0; i < n; i++){
		cin >> before[i] >> after[i];
		after2[i] = after[i];
	}
    
     	
	if (!areEqual(before, after, n))
		cout << "rated\n";
	else
	{
		sort(after, after+n, greater<int>());
		if (areEqual(after, after2, n))
			cout << "maybe\n";
		else
			cout << "unrated\n";
	}
}
