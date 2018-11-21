/*#include<iostream>			//Broken
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	int arr[] = { 1, 2, 4, 3, 2, 1 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size();
	vector <int> tmp(n);
	//fill(tmp.begin(), tmp.end(), 0);
	for (int i = n - 1; i >= 0; i--)
	{
		if (i != 0 && A[i - 1] > A[i])
		{
			tmp[i] = 1;
			bool flag = false;
			while (--i > 0 && A[i] > A[i + 1]) 
			{
				flag = true;
				tmp[i] = tmp[i + 1] + 1;
			}
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << tmp[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n; i++) 
	{
		if (i != n - 1 && A[i] < A[i + 1]) 
		{
			tmp[i] = 1;
			bool flag = false;
			while (++i < n && A[i] > A[i - 1]) 
			{
				flag = true;
				tmp[i] = max(tmp[i], 1 + tmp[i - 1]);
			}
			i--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << tmp[i] << ' ';
	}
	cout << endl;
	int ans = 0;
	for (int i = 0; i < n; i++) 
	{
		ans += tmp[i] == 0 ? 1 : tmp[i];
	}
	//Code ends here
	cout << ans << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << tmp[i] << ' ';
	}
	cout << endl;
	return 0;
}*/