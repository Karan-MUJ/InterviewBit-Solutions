/*#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;

vector <int> Aux;

void hist(int &mx) 
{
	stack <int> S;
	int y = Aux.size();
	for (int i = 0; i < y; i++) 
	{
		while (!S.empty() && Aux[i] <= Aux[S.top()])
		{
			int X = S.top();
			S.pop(); 
			int width = (S.empty() ? i : i - S.top() - 1);
			mx = max(mx, Aux[X] * width);
		}
		S.push(i);
	}
	int i = y;
	while (!S.empty())
	{
		int X = Aux[S.top()];
		S.pop();
		mx = max(mx, X * (S.empty() ? i : i - S.top() - 1));
	}
}

int main() 
{
	int x = 3, y = 3;
	int arr[3][3] = { {1, 1, 1},
					  {0, 1, 1},
					  {1, 0, 0} };
	vector <vector <int>> A(x); 
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++) 
		{
			A[i].push_back(arr[i][j]);
		}
	}
	//Code begins here
	int mx = 0;
	Aux.resize(y);
	for (int i = 0; i < x; i++) 
	{
		for (int j = 0; j < y; j++) 
		{
			if (!A[i][j]) 
			{
				Aux[j] = 0;
			}
			else 
			{
				Aux[j]++;
			}
		}
		hist(mx);
	}
	//return mx;
	//Code ends here
	cout << mx << endl;
	return 0;
}*/