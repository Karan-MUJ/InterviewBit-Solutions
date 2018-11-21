/*#include<algorithm>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

void invert(TreeNode *A) 
{
	if (!A) 
	{
		return;
	}
	swap(A->left, A->right);
	invert(A->left);
	invert(A->right);
}

int main() 
{
	TreeNode *A = NULL;
	//Code begins here
	invert(A);
	return 0;
}*/