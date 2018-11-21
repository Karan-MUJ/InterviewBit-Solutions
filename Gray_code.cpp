/*#include<iostream>
#include<vector>

using namespace std;

int n;

void fn(vector <int> &A, int m) 
{
	int N = A.size();
	if (N == 1 << n) 
	{
		return;
	}
	int shift = 1 << m;
	for (int i = N - 1; i >= 0; i--) 
	{
		A.push_back(A[i] | shift);
	}
	fn(A, m + 1);
}

int main() 
{
	n = 3;
	//Code begins here
	vector <int> A;
	if (n == 0)
	{
		//return A;
	}
	A.push_back(0);
	A.push_back(1);
	fn(A, 1);
	//Code ends here
	for (int i = 0; i < 1 << n; i++) 
	{
		cout << A[i] << ' ';
	}
	return 0;
}*/