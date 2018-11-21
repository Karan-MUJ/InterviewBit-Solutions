/*#include<unordered_map>
#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { 1, 1, 2, 1, 1 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	int B = 3, c = 0;
	//Code begins here
	int n = A.size(), i, j;
	vector <int> ans;
	unordered_map <int, int> M;
	for (i = 0; i < B; i++) 
	{
		if (M.find(A[i]) == M.end()) 
		{
			M[A[i]] = 1;
		}
		else 
		{
			M[A[i]]++;
		}
	}
	ans.push_back(M.size());
	j = 0;
	while (i < n) 
	{
		if (M.find(A[i]) == M.end()) 
		{
			M[A[i]] = 1;
		}
		else 
		{
			M[A[i]]++;
		}
		i++;
		if (!(--M[A[j]])) 
		{
			M.erase(A[j]);
		}
		ans.push_back(M.size());
		j++;
	}
	//Code ends here
	for (int x = 0; x < n - B + 1; x++) 
	{
		cout << ans[x] << endl;
	}
	return 0;
}*/