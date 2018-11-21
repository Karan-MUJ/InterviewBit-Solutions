/*#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

unordered_map <string, int> M;
vector <vector <string>> Simple;
vector <string> cool;
int mx;

void init_map() 
{
	for (int i = 0; i < mx; i++) 
	{
		M[cool[i]] = mx - i;
	}
}

void Simplify(vector <string> S)
{
	for (int i = 0; i < S.size(); i++) 
	{
		for (int j = 0, k = 0; j < S[i].size(); j++) 
		{
			if (S[i][j] == '_') 
			{
				continue;
			}
			k = j;
			while (j < S[i].size() && S[i][j] != '_') 
			{
				j++;
			}
			Simple[i].push_back(S[i].substr(k, j - k));
		}
	}
}

void Solve(multimap <int, int, greater<int>> &Map)
{
	int X = 0;
	for (int i = 0; i < Simple.size(); i++) 
	{
		X = 0;
		for (int j = 0; j < Simple[i].size(); j++) 
		{
			if (M.find(Simple[i][j]) != M.end()) 
			{
				X += M[Simple[i][j]];
			}
		}
		Map.insert(pair <int, int>(X, i));
	}
}

int main() 
{
	string A = "cool_ice_wifi";
	string arr[] = { "water_is_cool", "cold_ice_drink", "cool_wifi_speed" };
	vector <string> B(arr, arr + sizeof(arr) / sizeof(string));
	//Code begins here
	cool.clear();
	M.clear();
	cool.clear();
	for (int i = 0, j = 0; i < A.size(); i++)
	{
		if (A[i] == '_') 
		{
			continue;
		}
		j = i;
		while (i < A.size() && A[i] != '_') 
		{
			i++;
		}
		cool.push_back(A.substr(j, i - j));
	}
	mx = cool.size();
	init_map();
	Simple.resize(B.size());
	multimap <int, int, greater<int>> Map;
	Simplify(B);
	Solve(Map);
	vector <int> ans;
	multimap<int, int, greater<int>> ::iterator it = Map.begin();
	while (it != Map.end()) 
	{
		ans.push_back(it->second);
		it++;
	}
	//Code ends here
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}*/