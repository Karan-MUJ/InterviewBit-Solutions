/*#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() 
{
	string A = "()())((((((()))))))))(()))())(()((()))))(((((";
	//Code begins here
	int n = A.size(), mx = 0;
	vector <int> sol(n);
	for (int i = 1; i < n; i++) 
	{
		if (A[i] == ')' && A[i - 1] == '(') 
		{
			sol[i] = 2 + (i - 2 >= 0 ? sol[i - 2] : 0);
			mx = max(sol[i], mx);
		}
		else if (A[i] == ')' && i - sol[i - 1] - 1 >= 0 && A[i - sol[i - 1] - 1] == '(')
		{
			sol[i] = 2 + sol[i - 1] + (i - sol[i - 1] - 2 >= 0 ? sol[i - sol[i - 1] - 2] : 0);
			mx = max(sol[i], mx);
		}
	}
	//return mx;
	//Code ends here
	cout << mx << endl;
	for (int i = 0; i < n; i++) 
	{
		cout << sol[i] << ' ';
	}
	cout << endl;
	return 0;
}*/