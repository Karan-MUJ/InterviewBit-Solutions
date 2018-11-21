/*#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};

void create(ListNode **head, int x) 
{
	ListNode *tmp = new ListNode(x);
	if (*head == NULL) 
	{
		*head = tmp;
		return;
	}
	else 
	{
		ListNode *x = *head;
		while (x->next != NULL) 
		{
			x = x->next;
		}
		x->next = tmp;
	}
}

void print(ListNode *head) 
{
	while (head) 
	{
		cout << head->val << ' ';
		head = head->next;
	}
	cout << endl;
}

int main() 
{
	int arr1[] = { 1, 3, 5, 7 }, arr2[] = {2, 4, 6, 8};
	ListNode *A = NULL, *B = NULL, *C = NULL, *SOL;
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) 
	{
		create(&A, arr1[i]);
		create(&B, arr2[i]);
	}
	C = (A->val > B->val) ? B : A;
	(A->val > B->val) ? B = B->next : A = A->next;
	SOL = C;
	while (A != NULL && B != NULL) 
	{
		if (A->val > B->val) 
		{
			C->next = B;
			C = C->next;
			B = B->next;
		}
		else
		{
			C->next = A;
			C = C->next;
			A = A->next;
		}
	}
	while (A != NULL) 
	{
		C->next = A;
		C = C->next;
		A = A->next;
	}
	while (B != NULL) 
	{
		C->next = B;
		C = C->next;
		B = B->next;
	}
	print(SOL);
	return 0;
}*/