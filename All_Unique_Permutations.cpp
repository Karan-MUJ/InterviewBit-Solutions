/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> ans;

void rec(vector<int> &remaining, vector<int> &current)
{
	if (!remaining.size())
	{
		ans.push_back(current);
		return;
	}
	int n = remaining.size();
	for (int i = 0; i < n;)
	{
		int x = remaining[i];
		current.push_back(remaining[i]);
		remaining.erase(remaining.begin() + i);
		rec(remaining, current);
		remaining.insert(remaining.begin() + i, x);
		current.pop_back();
		i++;
		while (i < remaining.size() && remaining[i] == remaining[i - 1])
		{
			i++;
		}
	}
}


int main() 
{
	int arr[] = { 1, 3, 6, 3 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	ans.clear();
	sort(A.begin(), A.end());
	vector <int> rem;
	rec(A, rem);
	//Code ends here
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