/*#include<vector>
#include<iostream>
#include<unordered_map>

using namespace std;

vector <int> fn(vector <int> A) 
{
	int n = A.size();
	if (!n)
	{
		return A;
	}
	unordered_map <int, pair<int, int>> M;
	vector <int> ans;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			int s = A[i] + A[j];
			if (M.find(s) == M.end())
			{
				M[s] = make_pair(i, j);
			}
			else
			{
				pair <int, int> p = M[s];
				if (i != p.first && p.second != j && p.second != i)
				{
					vector <int> tmp;
					tmp.push_back(p.first);
					tmp.push_back(p.second);
					tmp.push_back(i);
					tmp.push_back(j);
					for (int x = 0; x < 4; x++)
					{
						if (!ans.size() || ans[x] > tmp[x])
						{
							ans = tmp;
							break;
						}
						if (ans[x] < tmp[x])
						{
							break;
						}
					}
				}
			}
		}
	}
	return ans;
}

int main() 
{
	int arr[] = { 3, 4, 7, 1, 2, 9, 8 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	A = fn(A);
	for (int i = 0; i < A.size(); i++) 
	{
		cout << A[i] << ' ';
	}
	cout << endl;
	return 0;
}*/