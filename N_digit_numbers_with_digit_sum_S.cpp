/*#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int A = 75, B = 22;
	//Code begins here
	vector <vector <int>> DP(A);
	auto mod = 1000000007;
	for (int i = 0; i < A; i++)
	{
		DP[i].resize(B);
	}
	for (int i = 0; i < B && i + 1 <= 9; i++)
	{
		DP[0][i] = 1;
	}
	for (int i = 0; i < A; i++) 
	{
		DP[i][0] = 1;
	}
	for (int i = 1; i < A; i++)
	{
		for (int j = 1; j < B; j++)
		{
			int k = (j - 9) < 0 ? 0 : j - 9;
			for (;k <= j; k++)
			{
				DP[i][j] = (DP[i][j] + DP[i - 1][k]) % mod;
			}
		}
	}
	//return DP[A - 1][B - 1];
	//Code ends here
	cout << DP[A - 1][B - 1] << endl;
	return 0;
}*/