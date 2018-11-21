/*#include<queue>
#include<iostream>
#include<vector>

using namespace std;

int main() 
{
	int arr[] = { 6, 5 }, A = 3;
	vector <int> B(arr, arr + sizeof(arr) / sizeof(int));
	//Code begins here
	priority_queue <int> Q;
	const int modulo = 1000000007;
	int n = B.size();
	long long ans = 0;
	for (int i = 0; i < n; i++) 
	{
		Q.push(B[i]);
	}
	for (int i = 0; i < A; i++) 
	{
		int x = Q.top();
		Q.pop();
		Q.push(x / 2);
		ans += (long long)x;
		ans %= modulo;
	}
	//Code ends here
	cout << ans;
	return 0;
}*/