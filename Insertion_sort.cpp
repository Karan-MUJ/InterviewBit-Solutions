/*#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

void cr(ListNode **head, int x)
{
	ListNode *tmp = new ListNode(x);
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		ListNode *cpy = *head;
		while (cpy->next)
		{
			cpy = cpy->next;
		}
		cpy->next = tmp;
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
	int arr[] = { 7, 1, 4, 6, 3, 6, 5, 2, 5, 99 };
	ListNode *A = NULL;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) 
	{
		cr(&A, arr[i]);
	}
	// Code begins here
	if (!A) 
	{
		//return A;
	}
	ListNode *mn = new ListNode(INT_MIN);
	ListNode *ans = mn, *prev, *next, *tmp, *ptr;
	ans->next = NULL;
	while (A)
	{
		ptr = ans;
		next = A->next;
		while (ptr->next != NULL && (ptr->next)->val < A->val) 
		{
			ptr = ptr->next;
		}
		tmp = ptr->next;
		ptr->next = A;
		A->next = tmp;
		A = next;
	}
	print(ans ->next);
	return 0;
}*/