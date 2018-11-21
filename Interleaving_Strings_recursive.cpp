/*#include<iostream>
#include<string>

using namespace std;

bool sol;

void IS(int i, int j, int k, string &A, string &B, string &C) 
{
	if (sol) 
	{
		return;
	}
	else if (k == C.size()) 
	{
		sol = true;
		return;
	}
	else if (i == A.size()) 
	{
		while (j < B.size() && B[j] == C[k]) 
		{
			j++;
			k++;
		}
		if (k < C.size() && B[j] != C[k]) 
		{
			return;
		}
		IS(i, j, k, A, B, C);
	}
	else if (j == B.size())
	{
		while (i < A.size() && A[i] == C[k])
		{
			i++;
			k++;
		}
		if (k < C.size() && A[i] != C[k])
		{
			return;
		}
		IS(i, j, k, A, B, C);
	}
	if (A[i] == C[k]) 
	{
		IS(i + 1, j, k + 1, A, B, C);
	}
	if (B[j] == C[k]) 
	{
		IS(i, j + 1, k + 1, A, B, C);
	}
}

int main() 
{
	string A = "aabcc", B = "dbbca", C = "aadbbbaccc";
	//string A = "ac", B = "da", C = "adca";
	//Code begins here
	sol = false;
	IS(0, 0, 0, A, B, C);
	cout << sol << endl;
}*/