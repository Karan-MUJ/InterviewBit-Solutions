/*#include<iostream>
#include<vector>
#include<set>
#include<iterator>

using namespace std;

struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}	
};

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
	int arr1[] = { 1, 10, 20 };
	int arr2[] = { 4, 11, 13 };
	int arr3[] = { 3, 8, 9 };
	ListNode *h1 = NULL;
	ListNode *h2 = NULL;
	ListNode *h3 = NULL;
	for (int i = 0; i < sizeof(arr1) / sizeof(int); i++) 
	{
		h1 = cr(h1, arr1[i]);
	}
	for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
	{
		h2 = cr(h2, arr2[i]);
	}
	for (int i = 0; i < sizeof(arr3) / sizeof(int); i++)
	{
		h3 = cr(h3, arr3[i]);
	}
	vector <ListNode*> A;
	A.push_back(h1);
	A.push_back(h2);
	A.push_back(h3);
	//Code begins here
	//ListNode *ans = NULL;
	int n = A.size();*/
	/*multimap <int, ListNode*, greater <int>> M;
	for (int i = 0; i < n; i++) 
	{
		int x = A[i] -> val;
		M.insert(pair <int, ListNode*>(A[i]->val, A[i]));
	}
	multimap <int, ListNode*, greater <int>> ::iterator it = M.begin();
	while (!M.empty()) 
	{
		
	}*/
	/*multiset <int> M;
	for (int i = 0; i < n; i++) 
	{
		while (A[i]) 
		{
			M.insert(A[i]->val);
			A[i] = A[i] ->next;
		}
	}
	ListNode *ans;
	multiset <int> ::iterator it = M.begin();
	ListNode *tmp = new ListNode(*it);
	ans = tmp;
	it++;
	while (it != M.end()) 
	{
		ListNode *x = new ListNode(*it);
		tmp->next = x;
		tmp = tmp->next;
		it++;
	}
	//code ends here
	print(ans);
	return 0;
}*/