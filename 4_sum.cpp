/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> fn(vector<int> A, int B)
{
	vector<vector<int>> ans;
	int n = A.size();
	if (!n) 
	{
		return ans;
	}
	sort(A.begin(), A.end());
	for (int i = 0; i < n - 3; i++) 
	{
		if (i && A[i] == A[i - 1]) 
		{
			continue;
		}
		for (int j = i + 1; j < n - 2; j++) 
		{
			if (j > i + 1 && A[j] == A[j - 1]) 
			{
				continue;
			}
			int ptr1 = j + 1, ptr2 = n - 1;
			vector <int> tmp;
			while (ptr1 < ptr2) 
			{
				int sum = A[i] + A[j] + A[ptr1] + A[ptr2];
				if (sum == B) 
				{
					tmp.push_back(A[i]);
					tmp.push_back(A[j]);
					tmp.push_back(A[ptr1]);
					tmp.push_back(A[ptr2]);
					ans.push_back(tmp);
					tmp.clear();
				}
				if (sum < B) 
				{
					ptr1++;
				}
				else if (sum > B) 
				{
					ptr2--;
				}
				else 
				{
					ptr1++;
					while (ptr1 < ptr2 && A[ptr1] == A[ptr1 - 1]) 
					{
						ptr1++;
					}
				}
			}
		}
	}
	return ans;
}

int main() 
{
	int arr[] = { 1, 0, -1, 0, -2, 2 };
	vector <int> A;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		A.push_back(arr[i]);
	}
	vector<vector<int>> ans = fn(A, 0);
	int n = ans.size();
	for (int i = 0; i < n; i++) 
	{
		cout << ans[i][0] << ' ' << ans[i][1] << ' ' << ans[i][2] << ' ' << ans[i][3] << endl;
	}
	return 0;
}*/