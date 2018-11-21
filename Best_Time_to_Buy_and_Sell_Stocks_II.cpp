/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = { 5030607, 3485715, 2500526, 676233, 7968122, 7455631, 2382510, 7838942 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int sol = 0, i = 0, n = A.size();
	while (++i < n)
	{
		sol += A[i] > A[i - 1] ? A[i] - A[i - 1] : 0;
	}
	//return sol;
	cout << sol << endl;
	return 0;
}*/