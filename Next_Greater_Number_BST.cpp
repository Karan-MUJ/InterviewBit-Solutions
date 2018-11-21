/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* insert(TreeNode* head, int x)
{
	TreeNode *copy = head;
	if (!copy)
	{
		TreeNode *temp = new TreeNode(x);
		return temp;
	}
	if (x <= copy->val)
	{
		head->left = insert(copy->left, x);
	}
	else
	{
		head->right = insert(copy->right, x);
	}
	return head;
}

TreeNode* sol(TreeNode* head, int x, TreeNode* ans) 
{
	if (!head) 
	{
		return ans;
	}
	if (head->val > x) 
	{
		ans = ans ->val > head ->val ? head : ans;
		return sol(head->left, x, ans);
	}
	if (head->val < x) 
	{
		return sol(head->right, x, ans);
	}
	head = head->right;
	if (!head) 
	{
		return ans;
	}
	while (head->left) 
	{
		head = head->left;
	}
	return head;
}

int main()
{
	TreeNode* head = NULL;
	int arr[] = { 10, 15, 5, 9, 1, 13, 20, 11, 3, 21, 2, 7, 17, 4 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		head = insert(head, A[i]);
	}
	int B = 21;
	//Code begins here
	TreeNode *dummy = new TreeNode(INT_MAX);
	cout << sol(head, B, dummy) ->val << endl;
	//Code ends here
	return 0;
}*/