/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int arr[3][3] = { {-2, -3, 3}, {-5, -10, 1}, {10, 30, -5} };
	vector< vector< int>> A(3);
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			A[i].push_back(arr[i][j]);
		}
	}
	//Code begins here
	int m = A.size();
	if (!m) 
	{
		return 0;
	}
	int n = A[0].size();
	vector< vector< int>> cost(m);
	for (int i = 0; i < m; i++) 
	{
		cost[i].resize(n);
	}
	cost[0][0] = A[0][0] <= 0 ? abs(A[0][0]) + 1 : A[0][0];
	for (int i = 1; i < n; i++) 
	{
		A[0][i] += A[0][i - 1];
		cost[0][i] = (A[0][i] <= 0 && abs(A[0][i]) >= cost[0][i - 1]) ? abs(A[0][i]) + 1 : cost[0][i - 1];
	}
	for (int i = 1; i < m; i++)
	{
		A[i][0] += A[i - 1][0];
		cost[i][0] = (A[i][0] <= 0 && abs(A[i][0]) >= cost[i - 1][0]) ? abs(A[i][0]) + 1 : cost[i - 1][0];
	}
	for (int i = 1; i < m; i++) 
	{
		for (int j = 1; j < n; j++) 
		{
			if (cost[i - 1][j] < cost[i][j - 1])			//upper element is lower
			{
				A[i][j] += A[i - 1][j];
				cost[i][j] = (A[i][j] <= 0 && abs(A[i][j]) >= cost[i - 1][j]) ? abs(A[i][j]) + 1 : cost[i - 1][j];
			}
			else											//left element is lower
			{
				A[i][j] += A[i][j - 1];
				cost[i][j] = (A[i][j] <= 0 && abs(A[i][j]) >= cost[i][j - 1]) ? abs(A[i][j]) + 1 : cost[i][j - 1];
			}
		}
	}
	//return cost[m - 1][n - 1];
	//Code ends here
	cout << cost[m - 1][n - 1] << endl;
	return 0;
}*/