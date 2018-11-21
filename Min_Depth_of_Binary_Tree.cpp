/*#include<algorithm>
#include<iostream>

using namespace std;

struct Node 
{
	int val;
	Node *right, *left;
	Node(int x): val(x), left(NULL), right(NULL){}
};

int fn(Node *head, int c)
{
	int a = INT_MAX, b = INT_MAX;
	if (!head->left && !head->right) 
	{
		return c;
	}
	if (head ->left)
		a = fn(head ->left, c + 1);
	if (head ->right)
		b = fn(head ->right, c + 1);
	return min(a, b);
}

int main() 
{
	Node *A = new Node(0);
	//Node *B = new Node(0);
	//Node *C = new Node(0);
	//Node *D = new Node(0);
	//A->left = B;
	//A->right = C;
	//C->left = D;
	//return fn(A, 1);
	cout << fn(A, 1) << endl;
	return 0;
}*/