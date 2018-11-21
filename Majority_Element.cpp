/*#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { 1, 1, 2, 3, 1 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int n = A.size(), sol = A[0], cnt = 1;
	for (int i = 1; i < n; i++) 
	{
		if (A[i] == sol) 
		{
			cnt++;
		}
		else 
		{
			cnt--;
			if (!cnt) 
			{
				sol = A[i];
				cnt = 1;
			}
		}
	}
	//return sol;
	//Code ends here
	cout << sol << endl;
	return 0;
}*/