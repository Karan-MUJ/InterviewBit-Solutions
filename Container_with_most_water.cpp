/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int maxArea(vector<int> &A) 
{
	int l = 0, r = A.size() - 1, mx = 0;
	while (l < r)
	{
		mx = max(mx, (r - l)*min(A[l], A[r]));
		if (A[l] <= A[r])
		{
			l++;
		}
		else
		{
			r--;
		}
	}
	return mx;
}

int main() 
{
	int arr[] = { 1, 5, 4, 3 };
	vector <int> a(arr, arr + 4);
	maxArea(a);
	return 0;
}*/