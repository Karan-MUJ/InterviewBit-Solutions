/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int arr[] = { 1, 2, 1, 2 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), mx_pr = A[n - 1];
	vector <int> sol(n);
	for (int i = n - 2; i >= 0; i--) 
	{
		mx_pr = max(A[i], mx_pr);
		sol[i] = max(sol[i + 1], mx_pr - A[i]);
	}
	int mn_pr = A[0];
	for (int i = 1; i < n; i++) 
	{
		mn_pr = min(A[i], mn_pr);
		sol[i] = max(sol[i - 1], sol[i] + A[i] - mn_pr);
	}
	//return sol[n - 1];
	//Code ends here
	cout << sol[n - 1] << endl;
	return 0;
}*/