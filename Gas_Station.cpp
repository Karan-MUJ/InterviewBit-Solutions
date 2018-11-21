/*#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
	int arr1[] = { 0 };
	int arr2[] = { 0 };
	vector <int> A(arr1, arr1 + sizeof(arr1) / sizeof(int)), B(arr2, arr2 + sizeof(arr2) / sizeof(int));
	//Code begins here
	vector <int> V;
	V.resize(A.size());
	int mn = V[0] = A[0] - B[0];
	int idx = mn < 0 ? 1 : 0;
	for (int i = 1; i < A.size(); i++) 
	{
		V[i] = V[i - 1] + A[i] - B[i];
		if (V[i] < mn) 
		{
			mn = V[i];
			idx = i + 1 == A.size() ? 0 : i + 1;
		}
	}
	int X = V[idx];
	for (int i = idx + 1; i != idx; i++) 
	{
		if (i == A.size()) 
		{
			i = 0;
		}
		X += V[i];
		if (X < 0) 
		{
			break;
		}
	}
	if (X < 0) 
	{
		cout << -1 << endl;
	}
	else 
	{
		cout << idx << endl;
	}
	return 0;
}*/