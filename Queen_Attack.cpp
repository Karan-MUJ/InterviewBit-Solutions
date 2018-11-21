/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() 
{
	string arr[3] = { "010", "100", "001" };
	vector <string> A(arr, arr + sizeof(arr) / sizeof(string));
	//Code begins here
	int n = A.size();
	vector <vector <int>> AA(n);
	for (int i = 0; i < n; i++)
	{
		int j = 0;
		while (j < A[i].size())
		{
			AA[i].push_back(A[i][j++]);
		}
	}
	vector < vector <vector <int>>> DP(n + 2, vector <vector <int>>(n + 2, vector <int>(4, 0)));
	vector <vector <int>> sol(n, vector <int>(n, 0));*/
	/*
	0 -> vertically up / down
	1 -> diagonally right up / down
	2 -> diagonally left up / down
	3 -> left / right
	*/
	/*for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (DP[i - 1][j][0])
			{
				DP[i][j][0] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i][j - 1][3])
			{
				DP[i][j][3] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i - 1][j - 1][2])
			{
				DP[i][j][2] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i - 1][j + 1][1])
			{
				DP[i][j][1] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (AA[i - 1][j - 1] == 1)
			{
				DP[i][j][0] = DP[i][j][1] = DP[i][j][2] = DP[i][j][3] = 1;
			}
		}
	}
	for (int i = 0; i < n + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			DP[i][j][0] = DP[i][j][1] = DP[i][j][2] = DP[i][j][3] = 0;
		}
	}
	//fill(DP.begin(), DP.end(), 0);
	for (int i = n; i > 0; i--)
	{
		for (int j = n; j > 0; j--)
		{
			if (DP[i + 1][j][0])
			{
				DP[i][j][0] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i][j + 1][3])
			{
				DP[i][j][3] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i + 1][j + 1][1])
			{
				DP[i][j][1] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (DP[i + 1][j - 1][2])
			{
				DP[i][j][2] = 1;
				sol[i - 1][j - 1] += 1;
			}
			if (AA[i - 1][j - 1] == 1)
			{
				DP[i][j][0] = DP[i][j][1] = DP[i][j][2] = DP[i][j][3] = 1;
			}
		}
	}
	//return sol;
	//Code ends here
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			cout << sol[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/