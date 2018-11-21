/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr[2][10] = { {16, 5, 54, 55, 36, 82, 61, 77, 66, 61}, {31, 30, 36, 70, 9, 37, 1, 11, 68, 14} };
	vector< vector <int>> A(2);
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 10; j++) 
		{
			A[i].push_back(arr[i][j]);
		}
	}
	//code begins here
	int n = A[0].size();
	if (n <= 2) 
	{
		if (!n) 
		{
			//return 0;
			cout << 0 << endl;
		}
		//return max(A[0][0], max(A[1][0], max(A[0][1], max(A[1][1], 0))));
		cout << max(A[0][0], max(A[1][0], max(A[0][1], max(A[1][1], 0)))) << endl;;
	}
	for (int i = 2; i < n; i++) 
	{
		int mx = max(A[0][i - 2], A[1][i - 2]);
		if (i >= 3) 
		{
			mx = max(A[0][i - 3], max(A[1][i - 3], mx));
		}
		if (mx <= 0) 
		{
			continue;
		}
		A[0][i] += mx;
		A[1][i] += mx;
	}
	cout << max(A[0][n - 1], max(A[1][n - 1], max(A[0][n - 2], max(A[1][n - 2], 0)))) << endl;
	return 0;
}*/