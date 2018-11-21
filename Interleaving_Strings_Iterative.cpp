/*#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() 
{
	string A = "YXXYXX", B = "YYYXX", C = "YXXYYXXXXYX";
	//Code begins here
	int m = A.size(), n = B.size();
	vector <vector <bool>> dp(m + 1);
	for (int i = 0; i <= m; i++) 
	{
		dp[i].resize(n + 1);
	}
	dp[0][0] = true;
	for (int i = 1; i <= m; i++)
	{
		if (dp[i - 1][0] && A[i - 1] == C[i - 1]) 
		{
			dp[i][0] = true;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if (dp[0][i - 1] && B[i - 1] == C[i - 1]) 
		{
			dp[0][i] = true;
		}
	}
	for (int i = 1; i <= m; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			if ((dp[i - 1][j] && A[i - 1] == C[i + j - 1]) || (dp[i][j - 1] && B[j - 1] == C[i + j - 1])) 
			{
				dp[i][j] = true;
			}
		}
	}
	cout << dp[m][n] << endl;
	//return dp[m][n];
	return 0;
}*/