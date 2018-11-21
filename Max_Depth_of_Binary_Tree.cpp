/*#include<algorithm>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode * left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

int fn(TreeNode *head, int c)
{
	int a = 0, b = 0;
	if (!head)
	{
		return c - 1;
	}
	a = fn(head->left, c + 1);
	b = fn(head->right, c + 1);
	return max(a, b);
}

int main()
{
	TreeNode *A = new TreeNode(1);
	TreeNode *B = new TreeNode(1);
	TreeNode *C = new TreeNode(1);
	A->left = C;
	A->right = B;
	if (!A) 
	{
		//return 0;
	}
	//return fn(A, 1);
	return 0;
}*/