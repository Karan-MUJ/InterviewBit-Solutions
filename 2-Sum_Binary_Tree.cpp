/*#include<iostream>
#include<stack>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void left(stack <TreeNode*> &S, TreeNode *X)
{
	while (X->left) 
	{
		S.push(X);
		X = X->left;
	}
	S.push(X);
}

void right(stack <TreeNode*> &S, TreeNode *X)
{
	while (X->right)
	{
		S.push(X);
		X = X->right;
	}
	S.push(X);
}

int solve(TreeNode *head, int k)
{
	stack <TreeNode*> L, R;
	TreeNode *i, *j;
	left(L, head);
	right(R, head);
	while (L.top() != R.top()) 
	{
		i = L.top();
		j = R.top();
		int val = i->val + j->val;
		if (val == k) 
		{
			return 1;
		}
		else if (val > k) 
		{
			R.pop();
			if (j->left) 
			{
				right(R, j->left);
			}
		}
		else 
		{
			L.pop();
			if (i->right) 
			{
				left(L, i->right);
			}
		}
	}
	return 0;
}

int main() 
{
	TreeNode *A = new TreeNode(10);
	A ->left = new TreeNode(8);
	A ->left ->right = new TreeNode(9);
	A ->left ->left = new TreeNode(6);
	A ->left ->left ->right = new TreeNode(7);
	//code begins here
	cout << solve(A, 20) << endl;
	//Code ends here
	return 0;
}*/