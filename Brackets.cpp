/*#include <iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	// your code goes here
	string str = "])";
	int n = str.size();
	stack <char> S;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == '[' || str[i] == '{' || str[i] == '(')
		{
			S.push(str[i]);
		}
		else
		{
			if (S.empty()) 
			{
				return 0;
			}
			if (str[i] == ']')
			{
				if (S.top() != '[')
				{
					cout << 0 << endl;
					break;
				}
				else
				{
					S.pop();
				}
			}
			else if (str[i] == '}')
			{
				if (S.top() != '{')
				{
					cout << 0 << endl;
					break;
				}
				else
				{
					S.pop();
				}
			}
			else if (str[i] == ')')
			{
				if (S.top() != '(')
				{
					cout << 0 << endl;
					break;
				}
				else
				{
					S.pop();
				}
			}
		}
	}
	if (!S.empty())
		cout << 0 << endl;
	else
		cout << 1 << endl;
	return 0;
}*/