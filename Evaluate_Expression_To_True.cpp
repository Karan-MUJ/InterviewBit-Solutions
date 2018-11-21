/*#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector <char> operand, oprator;
vector < vector<int>> T, F;
const int MOD = 1003;

int DP()
{
	int n = operand.size();
	for (int i = 0; i < n; i++)
	{
		if (operand[i] == 'T')
		{
			T[i][i] = 1;
		}
		else
		{
			F[i][i] = 1;
		}
	}
	for (int l = 2; l <= n; l++)
	{
		for (int i = 0; i + l - 1 < n; i++)
		{
			int j = i + l - 1;
			for (int k = i; k < j; k++)
			{
				if (oprator[k] == '&')
				{
					T[i][j] += T[i][k] * T[k + 1][j];
					T[i][j] %= MOD;
					F[i][j] += (T[i][k] + F[i][k]) * (T[k + 1][j] + F[k + 1][j]) - (T[i][k] * T[k + 1][j]);
					F[i][j] %= MOD;
				}
				else if (oprator[k] == '|')
				{
					T[i][j] += (T[i][k] + F[i][k]) * (F[k + 1][j] + T[k + 1][j]) - (F[i][k] * F[k + 1][j]);
					T[i][j] %= MOD;
					F[i][j] += F[i][k] * F[k + 1][j];
					F[i][j] %= MOD;
				}
				else
				{
					T[i][j] += (T[i][k] * F[k + 1][j]) + (T[k + 1][j] * F[i][k]);
					T[i][j] %= MOD;
					F[i][j] += (T[i][k] * T[k + 1][j]) + (F[i][k] * F[k + 1][j]);
					F[i][j] %= MOD;
				}
			}
		}
	}
	return T[0][n - 1];
}

int main()
{
	string A = "T|F&T^T";
	//Code begins here
	oprator.clear();
	operand.clear();
	T.clear();
	F.clear();
	int n = A.size();
	for (int i = 0; i < n; i++)
	{
		if (i & 1)
		{
			oprator.push_back(A[i]);
		}
		else
		{
			operand.push_back(A[i]);
		}
	}
	T.resize(operand.size() + 1, vector <int>(operand.size() + 1, 0));
	F.resize(operand.size() + 1, vector <int>(operand.size() + 1, 0));
	//return DP();
	//Code ends here
	cout << DP() << endl;
	return 0;
}*/