/*#include<iostream>
#include<stack>
#include<string>
#include<vector>

using namespace std;

int evalRPN(vector<string> &A)
{
	//string A[] = { "4", "13", "5", "/", "+" };
	int n = A.size(), a, b;
	stack <int> S;
	string c;
	for (int i = 0; i < n; i++)
	{
		c = A[i];
		if (c == "+" || c == "/" || c == "*" || c == "-")
		{
			if (c == "*")
			{
				b = S.top();
				S.pop();
				a = S.top();
				S.pop();
				S.push(a * b);
			}
			else if (c == "-")
			{
				b = S.top();
				S.pop();
				a = S.top();
				S.pop();
				S.push(a - b);
			}
			else if (c == "+")
			{
				b = S.top();
				S.pop();
				a = S.top();
				S.pop();
				S.push(a + b);
			}
			else
			{
				b = S.top();
				S.pop();
				a = S.top();
				S.pop();
				S.push(a / b);
			}
		}
		else
		{
			S.push(stoi(A[i]));
		}
	}
	return S.top();
}

int main()
{
	// your code goes here
	//string A = "";
	string arr[] = { "2", "1", "+", "3", "*" };
	vector <string> A(arr, arr + 5);
	cout << evalRPN(A) << endl;
	return 0;
}*/