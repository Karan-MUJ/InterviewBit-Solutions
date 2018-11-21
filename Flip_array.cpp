/*#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = { 15, 10, 6 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int sum = accumulate(A.begin(), A.end(), 0), n = A.size(), X;
	X = sum / 2;
	vector <int> DP(X + 1, INT_MAX);
	DP[0] = 0;
	for (int i = 0; i < n; i++) 
	{
		for (int j = X; j >= A[i]; j--)
		{
			if (DP[j - A[i]] != INT_MAX) 
			{
				DP[j] = min(DP[j], DP[j - A[i]] + 1);
			}
		}
	}
	for (int i = X; i >= 0; i--) 
	{
		if (DP[i] != INT_MAX) 
		{
			cout << DP[i] << endl;
			break;
		}
	}
	//Code ends here
	return 0;
}*/