/*#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
};

int main()
{
	TreeNode *A = new TreeNode(1);
	TreeNode *two = new TreeNode(2);
	TreeNode *three = new TreeNode(3);
	TreeNode *four = new TreeNode(4);
	TreeNode *five = new TreeNode(5);
	A->right = three;
	A->left = two;
	two ->left = four;
	two->right = five;
	//Code begins here
	stack <pair <TreeNode*, bool>> S;
	vector <int> ans;
	S.push(pair<TreeNode*, bool> (A, false));
	pair <TreeNode*, bool> X;
	while (!S.empty()) 
	{
		X = S.top();
		S.pop();
		if (!X.first)
		{
			continue;
		}
		if (X.second) 
		{
			ans.push_back(X.first->val);
		}
		else 
		{
			S.push(pair<TreeNode*, bool>(X.first->right, false));
			S.push(pair<TreeNode*, bool>(X.first, true));
			S.push(pair<TreeNode*, bool>(X.first->left, false));
		}
	}
	//return ans;
	//Code ends here
	for (int i = 0; i < ans.size(); i++) 
	{
		cout << ans[i] << ' ';
	}
	cout << endl;
	return 0;
}*/