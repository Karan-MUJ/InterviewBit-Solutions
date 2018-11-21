/*#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

vector<vector<int>> fn(vector<string> A) 
{
	unordered_map <string, vector<int>> M;
	unordered_map<string, vector<int>> ::iterator it;
	vector <string> B;
	vector<vector<int>> ans;
	int n = A.size();
	if (n == 0)
	{
		return ans;
	}
	for (int i = 0; i < n; i++)
	{
		string s;
		s = A[i];
		sort(s.begin(), s.end());
		if (M.find(s) == M.end()) 
		{
			vector <int> ins;
			ins.push_back(i + 1);
			M[s] = ins;
		}
		else 
		{
			M[s].push_back(i + 1);
		}
	}
	it = M.begin();
	while (it != M.end()) 
	{
		ans.push_back(it->second);
		it++;
	}
	return ans;
}

int main()
{
	vector <string> A{"cat", "dog", "god", "tca"};
	vector <vector<int>> ans = fn(A);
	int n = ans.size();
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < ans[i].size(); j++) 
		{
			cout << ans[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}*/