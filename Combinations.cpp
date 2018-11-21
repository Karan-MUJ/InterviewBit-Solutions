/*#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> ans;
int n, k;

void fn(vector <int> A, int i) 
{
	if (A.size() == k) 
	{
		ans.push_back(A);
		return;
	}
	if (i > n) 
	{
		return;
	}
	A.push_back(i);
	fn(A, i + 1);
	A.pop_back();
	fn(A, i + 1);
}

int main() 
{
	cin >> n >> k;
	//Code goes here
	if (k <= 0 || n < k)
	{
		//return ans;
	}
	ans.clear();
	vector <int> A;
	fn(A, 1);
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