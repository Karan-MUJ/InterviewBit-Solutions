/*#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main()
{
	unordered_set<int> S;
	int arr[] = { 11, 85, 100, 44, 3, 32, 96, 72, 93, 76, 67, 93, 63, 5, 10, 45, 99, 35, 13 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	int B = 60;
	//Code begins here
	int n = A.size();
	S.insert(A[0]);
	for (int i = 1; i < n; i++) 
	{
		if (S.find(B + A[i]) == S.end() && S.find(-B + A[i]) == S.end())
		{
			S.insert(A[i]);
		}
		else 
		{
			cout << 1 << endl;
		}
	}
	cout << 0 << endl;
	return 0;
}*/