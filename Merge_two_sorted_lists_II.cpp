/*#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &A, vector<int> &B)
{
	// Do not write main() function.
	// Do not read input, instead use the arguments to the function.
	// Do not print the output, instead return values as specified
	// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	int n1 = A.size(), n2 = B.size(), idx1 = 0, idx2 = 0;
	while (idx1 < A.size() && idx2 < n2)
	{
		if (A[idx1] >= B[idx2])
		{
			A.insert(A.begin() + idx1, B[idx2]);
			idx2++;
			idx1++;
		}
		else
		{
			idx1++;
		}
	}
	while (idx2 < n2)
	{
		A.push_back(B[idx2]);
		idx2++;
	}
}


int main() 
{
	vector <int> a, b;
	a.push_back(-9);
	a.push_back(-2);
	a.push_back(0);
	a.push_back(2);
	a.push_back(9);
	b.push_back(-11);
	b.push_back(0);
	b.push_back(7);
	//a.push_back();
	merge(a, b);
	return 0;
}*/