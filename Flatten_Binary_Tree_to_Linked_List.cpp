/*#include<stack>
#include<iostream>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

int main() 
{
	//TreeNode *A = new TreeNode(1);
	TreeNode* A = new TreeNode(1);
	A->left = new TreeNode(3);
	A->right = new TreeNode(4);
	A->right->left = new TreeNode(2);
	A->right->left->right = new TreeNode(5);
	//A->right->right = new TreeNode(6);
	//Code begins here
	stack <TreeNode*> S;
	TreeNode *B, *X = NULL;
	S.push(A);
	while (!S.empty()) 
	{
		B = S.top();
		if (X)
		{
			X->right = B;
		}
		S.pop();
		while (B) 
		{
			if (B->right)
			{
				S.push(B->right);
			}
			B->right = B->left;
			B->left = NULL;
			if (B->right)
			{
				B = B->right;
			}
			else 
			{
				X = B;
				break;
			}
		}
	}
	//Code ends here
	while (A) 
	{
		cout << A->val << ' ';
		A = A->right;
	}
	cout << endl;
	return 0;
}*/