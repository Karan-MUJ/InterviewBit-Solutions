/*#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector <int> fn(vector<int> A, int B) 
{
	unordered_map <int, int> M;
	vector <int> ans;
	int n = A.size();
	for (int i = 0; i < n; i++)
	{
		if (M.find(B - A[i]) != M.end())
		{
			ans.push_back(M[B - A[i]]);
			ans.push_back(i + 1);
			return ans;
		}
		if (M.find(A[i]) == M.end())
		{
			M[A[i]] = i + 1;
		}
	}
	return vector <int> {};
}

int main() 
{
	int arr[] = { 4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7, 7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8 };
	int B = -3;
	vector <int> A(arr, arr + (sizeof(arr) / sizeof(int)));
	//Code begins here
	A = fn(A, B);
	for (int i = 0; i < A.size(); i++) 
	{
		cout << A[i] << ' ';
	}
	cout << endl;
	return 0;
}*/