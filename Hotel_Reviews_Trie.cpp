/*#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
#define f first
#define s second

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) 
{
	if (a.first == b.f) 
	{
		return a.second < b.second;
	}
	return a.first > b.first;
}

struct node 
{
	bool end;
	node* arr[26];
	node() 
	{
		end = false;
		for (int i = 0; i < 26; i++)
			arr[i] = NULL;
	}
};

void convert(string &S) 
{
	int n = S.size();
	for (int i = 0; i < n; i++) 
	{
		if (S[i] == '_') 
		{
			S[i] = ' ';
		}
	}
}

void insert(node *head, string S)
{
	for (int i = 0; i < S.size(); i++)
	{
		if (!(head->arr[S[i] - 'a'])) 
		{
			head->arr[S[i] - 'a'] = new node();
		}
		head = head->arr[S[i] - 'a'];
	}
	head->end = true;
}

bool search(string S, node *head)
{
	int n = S.size();
	for (int i = 0; i < n; i++) 
	{
		if (!head->arr[S[i] - 'a']) 
		{
			return false;
		}
		head = head->arr[S[i] - 'a'];
	}
	return head->end;
}

int main() 
{
	string good = "cool_ice_wifi";
	string arr[] = { "water_is_cool", "cold_ice_drink", "cool_wifi_speed" };
	vector <string> review(arr, arr + sizeof(arr) / sizeof(string));
	//Code begins here
	convert(good);
	node *X = new node(); 
	string str;
	stringstream ss;
	ss << good;
	while (ss >> str) 
	{
		insert(X, str);
	}
	vector<pair<int, int> > rating;
	rating.resize(review.size());
	for (int i = 0, k = 0; i < review.size(); i++, k = 0)
	{
		convert(review[i]);
		ss.str("");
		ss.clear();
		ss << review[i];
		while (ss >> str) 
		{
			if (search(str, X)) 
			{
				k++;
			}
		}
		rating[i].f = k;
		rating[i].s = i;
	}
	sort(rating.begin(), rating.end(), cmp);
	vector <int> ans(review.size());
	for (int i = 0; i < review.size(); i++) 
	{
		ans[i] = rating[i].second;
	}
	//return ans;
	return 0;
}*/