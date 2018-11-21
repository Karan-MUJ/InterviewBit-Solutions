/*#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<iterator>
#include<algorithm>

using namespace std;

int main() 
{
	int arr1[] = { 10, 27, 92, 110 };
	int arr2[] = { -10, 57, 58, 112 };
	vector <int> A(arr1, arr1 + sizeof(arr1) / sizeof(int)), B(arr2, arr2 + sizeof(arr2) / sizeof(int));
	//Code begins here
	vector <int> ans;
	int n = A.size();
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	priority_queue <pair <int, pair <int, int>>> Q;
	set <pair<int, int>> S;
	pair <int, int> tmp;
	tmp.first = tmp.second = n - 1;
	Q.push(make_pair(A[n - 1] + B[n - 1], tmp));
	S.insert(pair <int, int>(n - 1, n - 1));
	pair <int, pair <int, int>> temp;
	for (int i = 0; i < n; i++) 
	{
		temp = Q.top();
		Q.pop();
		ans.push_back(temp.first);
		if (S.find(pair <int, int>(temp.second.first - 1, temp.second.second)) == S.end()) 
		{
			S.insert(pair<int, int>(temp.second.first - 1, temp.second.second));
			Q.push(make_pair(A[temp.second.first - 1] + B[temp.second.second], pair<int, int>(temp.second.first - 1, temp.second.second)));
		}
		if (S.find(pair <int, int>(temp.second.first, temp.second.second - 1)) == S.end())
		{
			S.insert(pair<int, int>(temp.second.first, temp.second.second - 1));
			Q.push(make_pair(A[temp.second.first] + B[temp.second.second - 1], pair<int, int>(temp.second.first, temp.second.second - 1)));
		}
	}
	//Code ends here
	for (int i = 0; i < ans.size(); i++) 
	{
		cout << ans[i] << endl;
	}
	return 0;
}*/