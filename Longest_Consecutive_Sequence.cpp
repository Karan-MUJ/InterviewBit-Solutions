/*#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() 
{
	int arr[] = { 36, 41, 56, 35, 44, 33, 34, 92, 43, 32, 42 }, mx = INT_MIN;
	vector<int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	unordered_map <int, pair<int, bool>> M;
	pair <int, bool> tmp;
	int n = A.size();
	for (int i = 0; i < n; i++) 
	{
		tmp.first = 0;
		tmp.second = false;
		M[A[i]] = tmp;
	}
	for (int i = 0; i < n; i++) 
	{
		if (M[A[i]].second == true) 
		{
			continue;
		}
		int count = 1, x = A[i];
		while (M.find(x + 1) != M.end()) 
		{
			if (M[x + 1].second == true) 
			{
				count += M[x + 1].first;
				break;
			}
			count++;
			M[x + 1].second = true;
			x++;
		}
		M[A[i]].first = count;
		M[A[i]].second = true;
		mx = max(mx, count);
	}
	//Code ends here
	cout << mx << endl;
	return 0;
}*/