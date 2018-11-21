/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int arr[] = { 0 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size();
	vector <int> DP(n, 0);
	DP[n - 1] = 1;
	for (int i = n - 2; i >= 0; i--) 
	{
		DP[i] = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] > A[i])
			{
				DP[i] = max(DP[i], DP[j] + 1);
			}
		}
	}
	int ans = 0;
	for (int i = 0; i < n; i++) 
	{
		ans = max(DP[i], ans);
	}
	//return ans;
	cout << ans << endl;
	//Code ends here
	return 0;
}*/