/*#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL){}
};

void print(ListNode *head)
{
	while (head)
	{
		cout << head->val << ' ';
		head = head->next;
	}
	cout << endl;
}

ListNode* cr(ListNode *head, int x)
{
	ListNode *tmp = new ListNode(x);
	if (head == NULL)
	{
		return tmp;
	}
	ListNode *cpy = head;
	while (head->next)
	{
		head = head->next;
	}
	head->next = tmp;
	return cpy;
}

ListNode *loop(ListNode *head, int x) 
{
	ListNode *cpy = head, *cpy1 = head;
	int c = 0;
	while (c++ != x) 
	{
		cpy = cpy->next;
	}
	while (cpy1->next) 
	{
		cpy1 = cpy1->next;
	}
	cpy1->next = cpy;
	return head;
}

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	ListNode *A = NULL;
	int B = 4;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) 
	{
		A = cr(A, arr[i]);
	}
	A = loop(A, B);
	//Code starts here
	if (A == NULL)
	{
		//return NULL;
	}
	ListNode *fst = A, *slw = A;
	do 
	{
		slw = slw->next;
		if (fst ->next != NULL && (fst ->next)->next != NULL)
			fst = (fst->next)->next;
		else
		{
			//return NULL;
		}
	} while (fst && fst != slw);
	fst = A;
	while (fst != slw) 
	{
		fst = fst->next;
		slw = slw->next;
	}
	//return slw;
	cout << slw->val;
	//print(A);
	return 0;
}*/