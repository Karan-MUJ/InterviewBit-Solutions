/*#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int largestRectangleArea(vector<int> &A)
{
	int x = 0, cur = 0, mx = 0, i = 0, n = A.size();
	stack <int> S;
	while (i < n)
	{
		if (S.empty() || A[S.top()] <= A[i])
		{
			S.push(i++);
		}
		else
		{
			x = S.top();
			S.pop();
			cur = S.empty() ? A[x] * i : A[x] * (i - 1 - S.top());
			mx = max(cur, mx);
		}
	}
	while (!S.empty())
	{
		x = S.top();
		S.pop();
		cur = S.empty() ? A[x] * i : A[x] * (i - 1 - S.top());
		mx = max(cur, mx);
	}
	return mx;
}

int main() 
{
	int arr[] = {1};
	vector <int> a(arr, arr + 1);
	cout << largestRectangleArea(a) << endl;
	return 0;
}*/