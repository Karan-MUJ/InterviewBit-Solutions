/*#include<iostream>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

int main()
{
	int arr[] = { 9, 4, 7, 2, 10 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), X, mx = -1;
	if (n < 3)
	{
		return n;
	}
	vector < vector <int>> DP(n, vector <int>(n, -1));
	map <int, int> M;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			DP[i][j] = 2;
			X = 2 * A[i] - A[j];
			if (!M.count(X))
			{
				continue;
			}
			DP[i][j] = max(DP[i][j], DP[M[X]][i] + 1);
			mx = max(DP[i][j], mx);
		}
		M[A[i]] = i;
	}	
	//return mx;
	//code ends here
	cout << mx << endl;
	return 0;
}*/