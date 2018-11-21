/*#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

int main() 
{
	int arr[] = { 80, 60, 30, 40, 20, 10 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size();
	vector <pair<int, int>> dp(n, pair<int, int> (1, 1));
	for (int i = 0; i < n; i++) 
	{
		int j = i - 1;
		while (j >= 0) 
		{
			if (A[i] > A[j]) 
			{
				dp[i].first = max(dp[i].first, dp[j].first + 1);
			}
			j--;
		}
		//cout << i + 1 << ' ' << dp[i].first << ' ' << dp[i].second << endl;
	}
	for (int i = n - 1; i >= 0; i--) 
	{
		int j = i + 1;
		while (j < n) 
		{
			if (A[i] > A[j]) 
			{
				dp[i].second = max(dp[i].second, dp[j].second + 1);
			}
			j++;
		}
		//cout << i + 1 << ' ' << dp[i].first << ' ' << dp[i].second << endl;
	}
	int mx = 0;
	for (int i = 0; i < n; i++) 
	{
		mx = max(mx, dp[i].first + dp[i].second);
	}
	//return mx;
	//Code ends here
	cout << mx - 1 << endl;
	return 0;
}*/