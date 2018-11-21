/*#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

int len(ListNode *head)
{
	int l = 0;
	while (head != NULL)
	{
		head = head->next;
		l++;
	}
	return l;
}

void cr(ListNode **head, char x)
{
	ListNode *tmp = new ListNode(x);
	if (!*head)
	{
		*head = tmp;
		return;
	}
	else
	{
		ListNode *cpy = *head;
		while (cpy->next != NULL)
		{
			cpy = cpy->next;
		}
		cpy->next = tmp;
	}
}

void print(ListNode *head)
{
	//Node *last = *head;
	//cout << "Length - " << len(head) << ' ' << ':' << ' ';
	while (head->next != NULL)
	{
		cout << head->val << ' ';
		head = head->next;
	}
	cout << head->val << endl;
	return;
}

ListNode* krev(ListNode* A, int B)
{
	struct ListNode* current = A;
	struct ListNode* next = NULL;
	struct ListNode* prev = NULL;
	int count = 0;*/
	/*reverse first k nodes of the linked list */
	/*while (count < B)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		count++;
	}
	if (next != NULL)
		A->next = krev(next, B);
	return prev;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = sizeof(arr) / sizeof(int), B = 3;
	ListNode *A = NULL, *ptr1 = NULL, *prevstart;
	for (int i = 0; i < n; i++)
	{
		cr(&A, arr[i]);
	}
	print(krev(A, 3));
	return 0;
}*/