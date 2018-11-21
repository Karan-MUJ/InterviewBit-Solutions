/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
	int arr[1][3] = { {1, 3, 2}, {4, 3, 1}, {5, 6, 1} };
	vector <vector<int>> A;
	A.resize(3);
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			A[i].push_back(arr[i][j]);
		}
	}
	//Code begins here
	int m = A.size(), n = A[0].size();
	for (int i = m - 2; i >= 0; i--) 
	{
		arr[i][n - 1] += arr[i + 1][n - 1];
	}
	for (int i = n - 2; i >= 0; i--) 
	{
		arr[m - 1][i] += arr[m - 1][i + 1];
	}
	for (int i = m - 2; i >= 0; i--) 
	{
		for (int j = n - 2; j >= 0; j--) 
		{
			arr[i][j] = min(arr[i + 1][j], arr[i][j + 1]) + arr[i][j];
		}
	}
	//return A[0][0];
	cout << arr[0][0] << endl;
	return 0;
}*/