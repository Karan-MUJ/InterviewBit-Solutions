/*#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int fn(string A) 
{
	int n = A.size();
	if (n == 0)
	{
		return n;
	}
	int arr[250] = { 0 };
	memset(arr, -1, sizeof(arr));
	int mx = -1, clen = 0, st = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[A[i]] == -1)
		{
			mx = max(mx, ++clen);
			arr[A[i]] = i;
		}
		else
		{
			st = max(st, arr[A[i]]);
			clen = i - st;
			mx = max(clen, mx);
			arr[A[i]] = i;
		}
	}
	return mx;
}

int main() 
{
	string str;
	cin >> str;
	cout << fn(str) << endl;
	return 0;
}*/