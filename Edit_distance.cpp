/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() 
{
	string A = "a", B = "b";
	//Code begins here
	vector <vector <int>> DP;
	DP.resize(A.size() + 1);
	for (int i = 0; i <= A.size(); i++) 
	{
		DP[i].resize(B.size() + 1);
	}
	for (int i = 0; i <= A.size(); i++) 
	{
		for (int j = 0; j <= B.size(); j++)
		{
			if (i == 0 || j == 0)
			{
				DP[i][j] = i == 0 ? j : i;
			}
			else if (A[i - 1] == B[j - 1])
			{
				DP[i][j] = DP[i - 1][j - 1];
			}
			else 
			{
				DP[i][j] = min(DP[i - 1][j - 1], min(DP[i - 1][j], DP[i][j - 1])) + 1;
			}
		}
	}
	//return DP[A.size()][B.size()];
	//Code ends here
	cout << DP[A.size()][B.size()] << endl;
	return 0;
}*/