/*#include<iostream>

using namespace std;

struct Node
{
	int val = 0;
	Node *next = NULL;
};

int len(Node *head) 
{
	int l = 0;
	while (head != NULL) 
	{
		head = head->next;
		l++;
	}
	return l;
}

void add(Node **head, int x)
{
	Node *tmp = new Node();
	tmp->val = x;
	tmp->next = NULL;
	Node *last = *head;
	if (last == NULL) 
	{
		*head = tmp;
		return;
	}
	else 
	{
		while (last->next != NULL) 
		{
			last = last->next;
		}
		last->next = tmp;
	}
}

void print(Node *head) 
{
	//Node *last = *head;
	cout << "Length - " << len(head) << ' ' << ':' << ' ';
	while (head -> next != NULL) 
	{
		cout << head->val << ' ';
		head = head->next;
	}
	cout << head->val << endl;
	return;
}

int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	Node *head = NULL;
	for (int i = 0; i < 7; i++) 
	{
		add(&head, arr[i]);
		print(head);
	}
	return 0;
}

/*#include<iostream>

using namespace std;

struct Node
{
	int val = 0;
	Node *next = NULL;
};

void add(Node **head, int x)						//** -> because we're passing by pointer and the function is expecting a pointer to pointer (head is a pointer itself Refer line - 104)
{
	cout << head << endl;
	cout << *head << endl;
	Node *tmp = new Node();
	tmp->val = x;
	tmp->next = *head;								// *head -> because we're dereferencing the pointer to pointer
	*head = tmp;*/
	/*Node *last = *head;
	if (*head == NULL) 
	{
		*head = tmp;
		return;
	}
	while (last->next != NULL) 
	{
		last = last->next;
	}
	last->next = tmp;
	return;*/
/*}

int main()
{
	// your code goes here
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	Node *head = NULL;
	for (int i = 0; i < 7; i++)
	{
		add(&head, arr[i]);
	}
	while (head->next != NULL)
	{
		cout << head->val << ' ';
		head = head->next;
	}
	cout << head->val << endl;
	return 0;
}*/