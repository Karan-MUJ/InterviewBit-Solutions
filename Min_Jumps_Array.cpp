/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	int arr[] = { 1, 0, 1, 1 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), mx = A[0] - 1, jmp = 1, next = 0;
	if (!n || n == 1) 
	{
		return 0;
	}
	if (A[0] == 0) 
	{
		return -1;
	}
	for (int i = 1; i < n; i++, mx--) 
	{
		next = max(next, A[i] - mx);
		if (!mx && !next) 
		{
			cout << "Impossible" << endl;
			break;
		}
		if (!mx) 
		{
			mx = next;
			next = 0;
			jmp++;
		}
		if (i + mx >= n - 1) 
		{
			break;
		}
	}
	cout << "Possible : " << jmp << endl;
	return 0;
}*/