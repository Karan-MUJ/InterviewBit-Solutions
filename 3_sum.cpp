/*#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int threeSumClosest(vector<int> &A, int B)
{
	int i, j, k, n = A.size(), ans = -123912;
	sort(A.begin(), A.end());
	for (int i = 0; i < n - 2; i++)
	{
		j = i + 1;
		k = n - 1;
		while (j < k)
		{
			ans = min(abs(B - ans), (B - (A[i] + A[j] + A[k])));
			if (A[i] + A[j] + A[k] < B)
			{
				j++;
			}
			else if (A[i] + A[j] + A[k] > B)
			{
				k--;
			}
			if (A[i] + A[j] + A[k] == B)
			{
				return B;
			}
		}
	}
	return ans;
}

int main() 
{
	int arr[] = {-1, 1, 2, -4};
	vector <int> a(arr, arr + 4);
	cout << threeSumClosest(a, 1) << endl;
	return 0;
}*/