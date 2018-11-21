/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int arr[4][5] = { {0, 1, 0, 1, 0},
					  {0, 1, 1, 1, 1},
					  {1, 1, 1, 0, 1},
					  {1, 1, 1, 1, 1} };
	vector <vector<int>> A(4);
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 5; j++)
		{
			A[i].push_back(arr[i][j]);
		}
	}
	//Code begins here
	int m = A.size(), n = A[0].size();
	vector <vector <int>> dp(m);
	for (int i = 0; i < m; i++) 
	{
		dp[i].resize(n);
	}
	for (int j = 0; j < n; j++) 
	{
		for (int i = 0; i < m; i++)
		{
			if (A[i][j] == 1)
			{
				dp[i][j] = ((i - 1) < 0 ? 0 : dp[i - 1][j]) + 1;
			}
		}
	}
	//cout << endl;
	for (int i = 0; i < m; i++) 
	{
		vector <int> X(m + 1);
		for (int j = 0; j < n; j++) 
		{
			X[dp[i][j]]++;
		}
		int idx = 0;
		for (int j = m; j >= 0; j--) 
		{
			while (X[j]) 
			{
				dp[i][idx] = j;
				idx++;
				X[j]--;
			}
		}
	}
	int mx = 0;
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			mx = max(dp[i][j] * (j + 1), mx);
		}
	}
	cout << mx << endl;
	//Code ends here
	return 0;
}*/