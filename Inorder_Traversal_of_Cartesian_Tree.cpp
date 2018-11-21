/*#include<vector>
#include<algorithm>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
};

int fnd( vector <int> &A,int st, int end)
{
	int ind = st;
	for (int i = st; i <= end; i++) 
	{
		if (A[i] > A[ind]) 
		{
			ind = i;
		}
	}
	return ind;
}

TreeNode* build(vector <int> &A, int st, int end) 
{
	if (st > end) 
	{
		return NULL;
	}
	int i = fnd(A, st, end);
	TreeNode *X = new TreeNode(A[i]);
	X->left = build(A, st, i - 1);
	X->right = build(A, i + 1, end);
	return X;
}

int main() 
{
	int arr[] = { 1, 2, 3 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here

	return 0;
}*/