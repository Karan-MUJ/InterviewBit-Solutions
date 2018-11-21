/*#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &A, int l, int r, int &ans) 
{
	vector <int> temp;
	int mid = (l + r) >> 1;
	int i = l, j = mid + 1;
	//temp.resize(r - l + 1);
	while (i <= mid && j <= r) 
	{
		if (A[i] <= A[j]) 
		{
			temp.push_back(A[i]);
			ans += j - (mid + 1);
			i++;
		}
		else 
		{
			temp.push_back(A[j]);
			j++;
		}
	}
	while (i <= mid) 
	{
		ans += (j - (mid + 1));
		temp.push_back(A[i]);
		i++;
	}
	while (j <= r) 
	{
		temp.push_back(A[j]);
		j++;
	}
	for (int i = 0; i + l <= r; i++) 
	{
		A[i + l] = temp[i];
	}
}

void mergesort(vector<int> &A, int l, int r, int &ans) 
{
	if (l != r)
	{
		int mid = (l + r) >> 1;
		mergesort(A, l, mid, ans);
		mergesort(A, mid + 1, r, ans);
		merge(A, l, r, ans);
	}
}

int main() 
{
	int arr[] = { 2, 4, 1, 3, 5 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int ans = 0, n = A.size();
	mergesort(A, 0, n - 1, ans);
	//return ans;
	//code ends here
	cout << ans << endl;
	return 0;
}*/