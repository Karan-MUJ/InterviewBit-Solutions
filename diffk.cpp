/*#include<iostream>
#include<vector>

using namespace std;

int diffPossible(vector<int> &A, int B)
{
	int n = A.size(), i = 0, j = 1;
	while (j < n)
	{
		if (A[j] - A[i] == B)
		{
			return 1;
		}
		else if (A[j] - A[i] < B)
		{
			j++;
		}
		else
		{
			i++;
			if (i == j)
				j++;
		}
	}
	return 0;
}

int main() 
{
	vector <int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(4);
	cout << diffPossible(arr, 0) << endl;
	return 0;
}*/