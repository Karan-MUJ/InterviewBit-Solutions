/*#include<iostream>
#include<algorithm>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

int mx = 0;

int path(TreeNode *head)
{
	if (!head) 
	{
		return 0;
	}
	int l = path(head->left), r = path(head->right), ret = max(head ->val + max(l, r), head ->val);
	mx = max(mx, max(ret, max(head->val + l + r, max(head->val + l, head->val + r))));
	if (l < 0 && r < 0) 
	{
		if (head->val >= 0) 
		{
			return head->val;
		}
		return 0;
	}
	return ret;
}

int main() 
{
	TreeNode *A = new TreeNode(10);
	A ->left = new TreeNode(2);
	A ->left ->left = new TreeNode(20);
	A ->left ->right = new TreeNode(1);
	A ->right = new TreeNode(10);
	A ->right ->right = new TreeNode(-25);
	A ->right ->right ->left = new TreeNode(3);
	A ->right ->right ->right = new TreeNode(30);
	//Code begins here
	mx = INT_MIN;
	path(A);
	//return mx;
	//Code ends here
	cout << mx << endl;
	return 0;
}*/