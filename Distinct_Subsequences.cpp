/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int DS(string A, string B)
{
	int m = A.size(), n = B.size();
	if (m < n) 
	{
		return 0;
	}
	if (A == B) 
	{
		return 1;
	}
	vector< vector <int>> sol(m + 1);
	for (int i = 0; i <= m; i++) 
	{
		sol[i].resize(n + 1);
	}
	for (int i = 0; i <= m; i++) 
	{
		sol[i][0] = 1;
	}
	for (int i = 1; i <= m; i++) 
	{
		for (int j = 1; j <= n; j++) 
		{
			if (A[i - 1] == B[j - 1]) 
			{
				sol[i][j] = sol[i - 1][j - 1] + sol[i - 1][j];
			}
			else 
			{
				sol[i][j] = sol[i - 1][j];
			}
		}
	}
	return sol[m][n];
}

int main() 
{
	string A = "geeksforgeeks", B = "ge";
	//Code begins here
	//return DS(A, B);
	cout << DS(A, B) << endl;
	return 0;
}*/