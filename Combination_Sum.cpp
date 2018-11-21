/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> cpy;
vector <vector <int>> ans;
int n, target;

void rec(vector <int> &A, int i, int sum) 
{
	if (sum == target) 
	{
		if (ans.size() == 0 || A != ans[ans.size() - 1])
		{
			ans.push_back(A);
			return;
		}
	}
	if (i >= n || sum > target) 
	{
		return;
	}
	//vector <int> temp = A;
	A.push_back(cpy[i]);
	rec(A, i, sum + cpy[i]);
	//rec(A, i + 1, sum + cpy[i]);
	A.pop_back();
	rec(A, i + 1, sum);
}

int main() 
{
	int arr[] = { 1, 2, 2, 2 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	int B = 5;
	//Code begins here
	sort(A.begin(), A.end());
	for (int i = 0; i < A.size(); i++) 
	{
		while (i + 1 < A.size() && A[i] == A[i + 1]) 		
		{
			A.erase(A.begin() + i);
			i++;
		}
	}
	vector <int> abc;
	ans.clear();
	n = A.size();
	cpy = A;
	target = B;
	rec(abc, 0, 0);
	//sort(ans.begin(), ans.end());
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