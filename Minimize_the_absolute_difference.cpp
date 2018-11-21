/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getmax(int a, int b, int c)
{
	return max(a, max(b, c));
}

int solve(vector<int> &A, vector<int> &B, vector<int> &C)
{
	int i = 0, j = 0, k = 0, n1 = A.size(), n2 = B.size(), n3 = C.size(), ans = INT_MAX, t, t1, t2, t3;
	while (i < n1 && j < n2 && k < n3)
	{
		ans = min(ans, getmax(abs(A[i] - B[j]), abs(A[i] - C[k]), abs(B[j] - C[k])));
		if (i + 1 < n1)
		{
			t1 = getmax(abs(A[i + 1] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i + 1]));
		}
		else
		{
			t1 = INT_MAX;
		}
		if (j + 1 < n2)
		{
			t2 = getmax(abs(A[i] - B[j + 1]), abs(A[i] - C[k]), abs(B[j + 1] - C[k]));
		}
		else
		{
			t2 = INT_MAX;
		}
		if (k + 1 < n3)
		{
			t3 = getmax(abs(A[i] - B[j]), abs(A[i] - C[k + 1]), abs(B[j] - C[k + 1]));
		}
		else
		{
			t3 = INT_MAX;
		}
		t = min(t1, min(t2, t3));
		if (t == INT_MAX)
		{
			return ans;
		}
		else if (t == t1)
		{
			i++;
		}
		else if (t == t2)
		{
			j++;
		}
		else
		{
			k++;
		}
	}
	return ans;
}


int main() 
{
	int arr[] = { 1, 4, 5, 8, 10 };
	int brr[] = { 6, 9, 15 };
	int crr[] = { 2, 3, 6, 6 };
	vector <int> a(arr, arr + 5), b(brr, brr + 3), c(crr, crr + 4);
	cout << solve(a, b, c) << endl;
	return 0;
}*/