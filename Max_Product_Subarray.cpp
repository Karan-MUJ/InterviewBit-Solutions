/*#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { -2, -3, 10, -2, -40, -32 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), mx = 0, curr = -1, curr_n = 1;
	//vector <int> dp(n);
	for (int i = 0; i < n; i++)
	{
		if (!A[i]) 
		{
			curr = -1;
			curr_n = 1;
		}
		else if (A[i] > 0) 
		{
			curr = max(A[i], curr * A[i]);
			curr_n *= A[i];
		}
		else if (A[i] < 0) 
		{
			int X = curr;
			curr = max(curr_n * A[i], -1);
			curr_n = min(X * A[i], A[i]);
		}
		mx = max(curr, mx);
	}
	//return mx;
	//Code ends here
	cout << mx << endl;
	return 0;
}*/