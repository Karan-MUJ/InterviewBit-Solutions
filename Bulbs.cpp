/*#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { 0, 1, 0, 1 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	int sol = 0, n = A.size();
	bool sum = false;
	for (int i = 0; i < n; i++)
	{
		if (!(A[i] ^ sum))
		{
			sum = !sum;
			sol++;
		}
	}
	//Code ends here
	cout << sol << endl;
	return 0;
}*/