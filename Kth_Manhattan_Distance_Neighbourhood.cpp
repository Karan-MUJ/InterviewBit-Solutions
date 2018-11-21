/*#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;

bool check(int i, int j, int m, int n)
{
	if (i < 0 || i >= m || j < 0 || j >= n)
	{
		return false;
	}
	return true;
}

int main()
{
	int arr[][3] = { {1, 2, 4}, {4, 5, 8} };
	vector <vector <int>> B(2);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			B[i].push_back(arr[i][j]);
		}
	}
	int A = 2;
	//Code begins here
	vector < vector< vector <int>>> DP(2);
	DP[0] = DP[1] = B;
	int R[4] = { 1, 0, 0, -1 }, C[4] = { 0, -1, 1, 0 }, m = B.size(), n = B[0].size();
	for (int k = 0; k <= A; k++)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (!k)
				{
					DP[k][i][j] = B[i][j];
				}
				else
				{
					for (int p = 0; p < 4; p++)
					{
						if (check(i + R[p], j + C[p], m, n))
							DP[k % 2][i][j] = max(DP[k % 2][i][j], DP[(k - 1) % 2][i + R[p]][j + C[p]]);
					}
				}
			}
		}
	}
	//return DP[A % 2];
	//Code ends here
	for (int i = 0; i < DP[A % 2].size(); i++)
	{
		for (int j = 0; j < DP[A % 2][i].size(); j++)
		{
			cout << DP[A % 2][i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/