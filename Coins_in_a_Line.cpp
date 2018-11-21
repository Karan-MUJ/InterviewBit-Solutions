/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = { 1, 2, 3, 4 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), x, y, z;
	vector <vector <int>> DP(n);
	for (int i = 0; i < n; i++) 
	{
		DP[i].resize(n);
	}
	for (int gap = 0; gap < n; gap++) 
	{
		for (int i = 0, j = gap; j < n; j++, i++) 
		{
			x = ((i + 2) <= j ? DP[i + 2][j] : 0);
			y = ((i + 1) <= (j - 1) ? DP[i + 1][j - 1] : 0);
			z = ((i <= j - 2) ? DP[i][j - 2] : 0);
			DP[i][j] = max(A[i] + min(x, y), A[j] + min(y, z));
		}
	}
	cout << DP[0][n - 1] << endl;
	return 0;
}*/