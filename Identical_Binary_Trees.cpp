/*#include<iostream>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

bool check(TreeNode *A, TreeNode *B) 
{
	if (!A || !B) 
	{
		if (!A && !B)
		{
			return true;
		}
		return false;
	}
	if (A->val == B->val) 
	{
		bool a = check(A->left, B->left);
		bool b = check(A->right, B->right);
		return a && b;
	}
	return false;
}

int main() 
{
	TreeNode *A = new TreeNode(1);
	TreeNode *a1 = new TreeNode(1);
	TreeNode *a2 = new TreeNode(1);
	TreeNode *a3 = new TreeNode(1);
	A->left = a1;
	A->right = a2;
	a1->right = a3;
	TreeNode *B = new TreeNode(1);
	TreeNode *b1 = new TreeNode(1);
	TreeNode *b2 = new TreeNode(1);
	B->left = b1;
	B->right = b2;
	cout << check(A, B) << endl;
	//Code begins here
	return 0;
}*/