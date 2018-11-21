/*#include<iostream>				Broken
#include<vector>
#include<queue>

using namespace std;

int sw(vector <int> &A)
{
	int n = A.size(), c = 0;
	for (int i = 0; i < n; i++) 
	{
		if (A[i] >= 0) 
		{
			c++;
			if (c >= 3) 
			{
				return 2;
			}
		}
	}
	if (c == 1) 
	{
		return 2;
	}
	return 1;
}

int main() 
{
	int arr[] = { 1, -2, 3, -4 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int ans;
	if (A.size() == 3) 
	{
		//return A[0] * A[1] * A[2];
	}
	switch (sw(A)) 
	{
		case 1: 
		{
			priority_queue<int> Q;
			Q.push(abs(A[0]));
			Q.push(abs(A[1]));
			Q.push(abs(A[2]));
			int n = A.size();
			for (int i = 3; i < n; i++) 
			{
				if (abs(A[i]) < Q.top()) 
				{
					Q.pop();
					Q.push(A[i]);
				}
			}
			ans = Q.top();
			Q.pop();
			while (!Q.empty()) 
			{
				ans *= Q.top();
				Q.pop();
			}
			ans *= -1;
		}
		break;
		case 2: 
		{
			priority_queue<int, vector<int>, greater<int>> Q;
			int n = A.size();
			Q.push(abs(A[0]));
			Q.push(abs(A[1]));
			Q.push(abs(A[2]));
			for (int i = 3; i < n; i++) 
			{
				if (abs(A[i]) > Q.top()) 
				{
					Q.pop();
					Q.push(abs(A[i]));
				}
			}
			ans = Q.top();
			Q.pop();
			while (!Q.empty()) 
			{
				ans *= Q.top();
				Q.pop();
			}
		}
		break;
	}
	//return ans;
	//Code ends here
	cout << ans << endl;
	return 0;
}*/