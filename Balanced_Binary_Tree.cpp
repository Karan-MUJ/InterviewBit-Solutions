/*#include<iostream>
#include<algorithm>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left, *right;
	TreeNode (int x) : val(x), left(NULL), right(NULL){}
};

bool status;

int check(TreeNode *head, int c)
{
	if (!status) 
	{
		return INT_MIN;
	}
	if (!head) 
	{
		return c - 1;
	}
	int x = check(head->left, c + 1), y = check(head->right, c + 1);
	if (abs(x - y) > 1) 
	{
		status = false;
	}
	return max(x, y);
}

int main() 
{
	TreeNode *A = new TreeNode(1);
	TreeNode *two = new TreeNode(2);
	TreeNode *three = new TreeNode(3);
	TreeNode *four = new TreeNode(4);
	TreeNode *five = new TreeNode(5);
	TreeNode *six = new TreeNode(6);
	TreeNode *seven = new TreeNode(7);
	TreeNode *eight = new TreeNode(8);
	//Code begins here
	status = true;
	check(A, 0);
	if (status) 
	{
		//return 1;
	}
	else 
	{
		//return 0;
	}
	return 0;
}*/