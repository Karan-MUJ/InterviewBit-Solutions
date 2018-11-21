/*#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main()
{
	// your code goes here
	int arr[] = { 1, 3, -1, -3, 5, 3, 6, 7 };
	vector <int> A(arr, arr + 8), ans;
	int n = A.size();
	int B = 3;
	deque <int> D;
	for (int i = 0; i < B; i++)
	{
		if (D.empty())
		{
			D.push_back(A[i]);
		}
		else
		{
			while (!D.empty() && D.back() < A[i])
			{
				D.pop_back();
			}
			D.push_back(A[i]);
		}
	}
	ans.push_back(D.front());
	for (int i = B; i < n; i++)
	{
		if (!D.empty() && D.front() == A[i - B])
		{
			D.pop_front();
		}
		while (!D.empty() && D.back() < A[i])
		{
			D.pop_back();
		}
		D.push_back(A[i]);
		ans.push_back(D.front());
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}*/