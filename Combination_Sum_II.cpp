/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int target, n;
vector <int> cpy;
vector <vector <int>> ans;

void fn(vector <int> A, int i, int sum) 
{
	if (sum == target) 
	{
		if (ans.size() == 0 || ans[ans.size() - 1] != A)
		{
			ans.push_back(A);
		}
		else 
		{
			return;
		}
	}
	if (sum > target || i == n)
	{
		return;
	}
	if (i + 1 < n && cpy[i] == cpy[i + 1]) 
	{
		int x = i;
		while (x + 1 < n && cpy[x] == cpy[x + 1]) 
		{
			x++;
		}
		int s = sum;
		fn(A, x + 1, sum);
		for (int j = i; j < x + 1; j++, i++) 
		{
			s += cpy[i];
			A.push_back(cpy[i]);
			fn(A, x + 1, s);
		}
	}
	else 
	{
		A.push_back(cpy[i]);
		fn(A, i + 1, sum + cpy[i]);
		A.pop_back();
		fn(A, i + 1, sum);
	}
}

int main() 
{
	int arr[] = { 8, 10, 6, 11, 1, 16, 8 };
	//sort(arr, arr + sizeof(arr) / sizeof(int));
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	target = 28;
	//code begins here
	sort(A.begin(), A.end());
	n = A.size();
	ans.clear();
	cpy = A;
	vector <int> tmp;
	ans.clear();
	fn(tmp, 0, 0);
	for (int i = 0; i < ans.size(); i++) 
	{
		for (int j = 0; j < ans[i].size(); j++) 
		{
			cout << ans[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/