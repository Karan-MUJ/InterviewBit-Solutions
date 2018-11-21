/*#include<iostream>
#include<vector>

using namespace std;

struct Node 
{
	int val;
	Node* left, *right;
	Node (int x) : val(x), left(NULL), right(NULL){}
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
		head ->left = insert(copy->left, x);
	}
	else 
	{
		head ->right = insert(copy->right, x);
	}
	return head;
}

int main() 
{
	Node* head = NULL;
	int arr[] = { 10, 15, 5, 9, 1, 13, 20 };
	vector <int> A(arr, arr + sizeof(arr) / sizeof(int));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) 
	{
		head = insert(head, A[i]);
	}
	return 0;
}*/