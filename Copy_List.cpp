/*#include<iostream>
#include<unordered_map>

using namespace std;

struct RandomListNode 
{
	int label;
	RandomListNode *next, *random;
	RandomListNode(int x) : label(x), next(NULL), random(NULL) {}	
};

RandomListNode* fn(RandomListNode *A) 
{
	unordered_map <RandomListNode*, RandomListNode*> M;
	RandomListNode *head = A, *B = NULL, *ptr = B;
	while (A)
	{
		RandomListNode *tmp = new RandomListNode(A->label);
			if (!B)
			{
				B = tmp;
				ptr = B;
			}
			else
			{
				B->next = tmp;
				B = B->next;
			}
		A = A->next;
	}
	A = head;
	B = ptr;
	while (A)
	{
		M[A] = B;
		A = A->next;
		B = B->next;
	}
	A = head;
	B = ptr;
	while (A)
	{
		B->random = M[A->random];
		B = B->next;
		A = A->next;
	}
	return B = ptr;
}

void print(RandomListNode *A) 
{
	while (A) 
	{
		cout << A -> label << ' ';
		A = A -> next;
	}
	cout << endl;
}

int main() 
{
	unordered_map <RandomListNode*, RandomListNode*> M;
	RandomListNode* arr[3], *head;
	arr[0] = new RandomListNode(1);
	arr[1] = new RandomListNode(2);
	arr[2] = new RandomListNode(3);
	arr[0]->next = arr[1];
	arr[0]->random = arr[2];
	arr[1]->next = arr[2];
	arr[1]->random = arr[0];
	arr[2]->next = NULL;
	arr[2]->random = arr[0];
	head = fn(arr[0]);
	return 0;
}*/