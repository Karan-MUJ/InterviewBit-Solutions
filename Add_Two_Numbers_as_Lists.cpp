/*#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x): val(x), next(NULL){}
};

ListNode* cr(ListNode *head, int x) 
{
	ListNode *tmp = new ListNode(x);
	if (head == NULL) 
	{
		return tmp;
	}
	ListNode *cpy = head;
	while (cpy->next) 
	{
		cpy = cpy->next;
	}
	cpy->next = tmp;
	return head;
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
	int arr1[] = { 1, 2, 3, 4 }, arr2[] = {6, 7, 8, 9};
	ListNode *A = NULL, *B = NULL;
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) 
	{
		//A = cr(A, arr1[i]);
		B = cr(B, arr2[i]);
	}
	// Code starts here
	int carry = 0, sum = 0;
	ListNode *ans = NULL, *ansptr = ans;
	while (A && B) 
	{
		sum = A->val + B->val + carry;
		ListNode *tmp = new ListNode(sum % 10);
		carry = sum / 10;
		A = A->next;
		B = B->next;
		if (ansptr == NULL) 
		{
			ansptr = tmp;
			ans = ansptr;
		}
		else 
		{
			ansptr->next = tmp;
			ansptr = ansptr->next;
		}
	}
	while (A) 
	{
		sum = A->val + carry;
		ListNode *tmp = new ListNode(sum % 10);
		carry = sum / 10;
		A = A->next;
		//B = B->next;
		if (ansptr == NULL)
		{
			ansptr = tmp;
			ans = ansptr;
		}
		else
		{
			ansptr->next = tmp;
			ansptr = ansptr->next;
		}
	}
	while (B) 
	{
		sum = B->val + carry;
		ListNode *tmp = new ListNode(sum % 10);
		carry = sum / 10;
		A = A->next;
		//B = B->next;
		if (ansptr == NULL)
		{
			ansptr = tmp;
			ans = ansptr;
		}
		else
		{
			ansptr->next = tmp;
			ansptr = ansptr->next;
		}
	}
	while (carry) 
	{
		//sum = (A->val + B->val + carry) % 10;
		//carry /= 10;
		ListNode *tmp = new ListNode(carry % 10);
		carry /= 10;
		ansptr->next = tmp;
		ansptr = ansptr->next;*/
		/*A = A->next;
		B = B->next;
		if (ansptr == NULL)
		{
			ansptr = tmp;
		}
		else
		{
			ansptr->next = tmp;
			ansptr = ansptr->next;
		}*/
	/*}
	print(ans);
	return 0;
}*/