/*#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { -19, 8, 2, -8, 19, 5, -2, -23 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	unordered_map <int, int> M;
	int n = A.size();
	vector <int> ans;
	vector <int> psum;
	//psum.resize(n);
	psum.push_back(A[0]);
	for (int i = 1; i < n; i++) 
	{
		psum.push_back(psum[i - 1] + A[i]);
	}
	int st = INT_MAX, end = INT_MAX, cst, cend;
	for (int i = 0; i < n; i++) 
	{
		if (psum[i] == 0) 
		{
			st = 0;
			end = i;
		}
		else if (M.find(psum[i]) == M.end()) 
		{
			M[psum[i]] = i;
		}
		else 
		{
			cst = M[psum[i]] + 1;
			cend = i;
			if ((cend - cst > end - st) || (cend - cst == end - st) && (cst < st)) 
			{
				st = cst;
				end = cend;
			}
		}
	}
	if (st == INT_MAX)
	{
		ans;								//return
	}
	for (int i = st; i <= end; i++) 
	{
		ans.push_back(A[i]);
	}
	return 0;
}*/