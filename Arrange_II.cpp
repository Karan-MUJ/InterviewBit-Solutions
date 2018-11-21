/*#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string A = "WWWB";
	int B = 2;	
	//Code begins here
	int n = A.size();
	if (n < B)
	{
		return -1;
	}
	if (B == n)
	{
		return 0;
	}
	vector <vector <int>> DP(n, vector <int>(B, 0));
	int wt = 0, bk = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == 'B')
			bk++;
		else
			wt++;
		DP[i][0] = bk * wt;
	}
	for (int j = 1; j < B; j++)
	{
		for (int i = 0; i < n; i++)
		{
			wt = 0, bk = 0;
			DP[i][j] = INT_MAX;
			for (int k = i; k >= 0; k--)
			{
				if (A[k] == 'B')
					bk++;
				else
					wt++;
				DP[i][j] = min(DP[i][j], bk * wt + ((k - 1 >= 0) ? DP[k - 1][j - 1] : 0));
			}
		}
	}
	return DP[n - 1][B - 1];
	//Code ends here
	return 0;
}*/