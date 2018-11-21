/*#include<iostream>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int ans;

pair<int, int> LCA(TreeNode *head, int &B, int &C)
{
	pair <bool, bool> ret, L, R;
	if (!head || ans != INT_MIN)
	{
		return ret;
	}
	L = LCA(head->left, B, C);
	R = LCA(head->right, B, C);
	if (head->val == B)
	{
		ret.first = true;
	}
	else if (head->val == C)
	{
		ret.second = true;
	}
	ret.first |= L.first || R.first;
	ret.second |= L.second || R.second;
	if (ret.first && ret.second && ans == INT_MIN) 
	{
		ans = head->val;
	}
	return ret;
}

int main() 
{
	TreeNode* A = new TreeNode(1);
	A ->left = new TreeNode(2);
	A ->right = new TreeNode(3);
	A ->left ->right = new TreeNode(4);
	A ->left ->left = new TreeNode(5);
	int B = 5, C = 2;
	//Code begins here
	ans = INT_MIN;
	LCA(A, B, C);
	//Code ends here
	cout << ans << endl;
	return 0;
}*/