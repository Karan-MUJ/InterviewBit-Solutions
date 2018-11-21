/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int arr[] = { 1, 2, 3 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	int B = 4;
	//Code begins here
	int n = A.size();
	vector <int> DP(B + 1);
	DP[0] = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = A[i]; j <= B; j++) 
		{
			DP[j] += DP[j - A[i]];
		}
	}
	//return DP[B];
	//Code ends here
	cout << DP[B] << endl;
	return 0;
}*/