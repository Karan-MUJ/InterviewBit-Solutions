/*#include<iostream>
#include<vector>
#include<string>

using namespace std;

int n;
vector <string> ans;

void rec(string str, int c)
{
	if (c > n || c < 0) 
	{
		return;
	}
	if ((2 * n - str.size() - c) < 0) 
	{
		return;
	}
	if (str.size() == 2 * n) 
	{
		if (c == 0)
		{
			ans.push_back(str);
		}
		else 
		{
			return;
		}
	}
	if ((2 * n - str.size() - c) < 0) 
	{
		return;
	}
	if ((2 * n - str.size() - c) == 0)
	{
		while (str.size() < 2 * n)
			str.push_back(')');
		ans.push_back(str);
		return;
	}
	if (c == 0) 
	{
		str.push_back('(');
		rec(str, c + 1);
	}
	else 
	{
		string cpy = str;
		str.push_back('(');
		rec(str, c + 1);
		cpy.push_back(')');
		rec(cpy, c - 1);
	}
}

int main() 
{
	int A = 4;
	//Code begins here
	n = A;
	ans.clear();
	string str;
	rec(str, 0);
	//Code ends here
	for (int i = 0; i < ans.size(); i++) 
	{
		cout << ans[i] << ' ';
	}
	return 0;
}*/