/*#include<iostream>
#include<vector>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left, *right;
	TreeNode (int x) : val(x), left(NULL), right(NULL){}
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

int X, ans;
bool flag;

int check(TreeNode *A, int c)
{
	if (flag) 
	{
		return 0;
	}
	if (!A) 
	{
		return 0;
	}
	int l = 1 + check(A->left, c);
	if (c + l == X) 
	{
		ans = A->val;
		flag = true;
	}
	int r = check(A->right, l + c);
	return l + r;
}

int main() 
{
	TreeNode* A = NULL;
	int arr[] = { 10, 15, 5, 9, 1, 13, 20 };
	vector <int> A1(arr, arr + sizeof(arr) / sizeof(int));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		A = insert(A, A1[i]);
	}
	int B = 10;
	//Code begins here
	ans = 111;
	X = B;
	flag = false;
	check(A, 0);
	cout << ans << endl;
	//return ans;
	return 0;
}*/