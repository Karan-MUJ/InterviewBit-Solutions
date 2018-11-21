/*#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { 3,2,1,0,4 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//code begins here
	int n = A.size(), current = A[0];
	for (int i = 0; i < n; i++, current--) 
	{
		if (current < 0) 
		{
			cout << "NOPE" << endl;
			//return false;
		}
		if (A[i] - current > 0) 
		{
			current += (A[i] - current);
		}
	}
	cout << "YEP" << endl;
	//return true;
	return 0;
}*/