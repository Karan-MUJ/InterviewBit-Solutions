/*#include<unordered_map>
#include<vector>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
};

unordered_map <int, int> M;
int ind;

TreeNode* build(vector <int> &inorder, vector <int> &preorder, int st, int end) 
{
	if (st > end) 
	{
		return NULL;
	}
	int i = M[preorder[ind]];
	TreeNode *X = new TreeNode(preorder[ind]);
	ind++;
	if (st == end) 
	{
		return X;
	}
	X->left = build(inorder, preorder, st, i - 1);
	X->right = build(inorder, preorder, i + 1, end);
	return X;
}

int main() 
{
	//int arr1[] = { 10, 30, 40, 50, 60, 70, 90 };
	int arr1[] = { 1, 2, 3 };
	//int arr2[] = { 50, 30, 10, 40, 70, 60, 90 };
	int arr2[] = { 2, 1, 3 };
	vector <int> in(arr1, arr1 + sizeof(arr1) / sizeof(int)), pre(arr2, arr2 + sizeof(arr2) / sizeof(int));
	//Code begins here
	M.clear();
	for (int i = 0; i < in.size(); i++) 
	{
		M[in[i]] = i;
	}
	ind = 0;
	//return build(A, B, 0, B.size() - 1);
	 build(in, pre, 0, in.size() - 1);
	return 0;
}*/