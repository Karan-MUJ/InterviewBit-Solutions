/*#include<iostream>
#include<stack>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
}*curr;

stack <TreeNode*> S;

void st()
{
	while (!S.empty()) 
	{
		S.pop();
	}
}

void traverse(TreeNode *node)
{
	while (curr ->left) 
	{
		S.push(curr);
		curr = curr ->left;
	}
}

bool hasnext()
{
	if (!curr) 
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int next()
{
	if (!curr) 
	{
		return INT_MIN;
	}
	int ret = curr->val;
	if (curr ->right) 
	{
		curr = curr->right;
		traverse(curr);
	}
	else if (!S.empty())
	{
		curr = S.top();
		S.pop();
	}
	else 
	{
		curr = NULL;
	}
	return ret;
}

int main() 
{
	TreeNode *A = new TreeNode(4);
	A ->left = new TreeNode(2);
	A ->left ->left = new TreeNode(1);
	A->left->right = new TreeNode(3);
	A ->right = new TreeNode(5);
	//Code begins here
	st();
	curr = A;
	traverse(A);
	cout << next() << endl;
	cout << next() << endl;
	cout << next() << endl;
	cout << next() << endl;
	cout << next() << endl;
	cout << next() << endl;
	return 0;
}*/