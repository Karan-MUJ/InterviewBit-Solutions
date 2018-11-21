/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	vector <vector<int>> A;
	A.resize(3);
	A[0].push_back(2);
	A[1].push_back(6);
	A[1].push_back(6);
	A[2].push_back(7);
	A[2].push_back(8);
	A[2].push_back(4);
	//Code begins here
	int n = A.size();
	for (int i = n - 2; i >= 0; i--)
	{
		for (int j = 0; j < A[i].size(); j++)
		{
			A[i][j] = min(A[i + 1][j], A[i + 1][j + 1]) + A[i][j];
		}
	}
	//return A[0][0];
	cout << A[0][0] << endl;
	return 0;
}*/