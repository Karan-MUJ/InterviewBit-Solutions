/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int arr1[] = { 4, -4, 2 }, arr2[] = { 4, 0, 5 };
	vector <int> A(arr1, arr1 + sizeof(arr1) / sizeof(int)), B(arr2, arr2 + sizeof(arr2) / sizeof(int));
	//Code begins here
	int n = A.size(), ans = INT_MIN;
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	for (int i = 0; i < n; i++)	
	{
		ans = max(ans, abs(A[i] - B[i]));
	}
	//Code ends here
	cout << ans << endl;
	return 0;
}*/