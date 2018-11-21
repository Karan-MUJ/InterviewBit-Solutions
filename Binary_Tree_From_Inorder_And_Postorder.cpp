/*#include<vector>
#include<unordered_map>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}	
};

unordered_map <int, int> M;

TreeNode* build(vector <int> &in, vector <int> &post, int st, int end, int &ind)
{
	if (st > end) 
	{
		return NULL;
	}
	int i = M[post[ind]];
	ind--;
	TreeNode *X = new TreeNode(in[i]);
	if (st == end) 
	{
		return X;
	}
	X->right = build(in, post, i + 1, end, ind);
	X->left = build(in, post, st, i - 1, ind);
	return X;
}

int main() 
{
	int Inorder[] = { 2, 1, 3 };
	int Postorder[] = { 2, 3, 1 };
	vector <int> in(Inorder, Inorder + sizeof(Inorder) / sizeof(int)), post(Postorder, Postorder + sizeof(Postorder) / sizeof(int));
	//Code begins here
	M.clear();
	for (int i = 0; i < in.size(); i++) 
	{
		M[in[i]] = i;
	}
	int ind = in.size() - 1;
	build(in, post, 0, ind, ind);
	return 0;
}*/