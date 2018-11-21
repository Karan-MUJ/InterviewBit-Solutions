/*#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

vector <int> cpy;

int skip(int x, int n, int sw)
{
	if (sw == 0 || sw == 2)
	{
		while (x < n && cpy[x + 1] == cpy[x])
		{
			x++;
		}
		x++;
		return x;
	}
	if (sw == 1)
	{
		while (x > 0 && cpy[x - 1] == cpy[x])
		{
			x--;
		}
		x--;
		return x;
	}
	return x;
}

vector<vector<int>> threeSum(vector<int> &A)
{
	int n = A.size(), l, r, sum;
	sort(A.begin(), A.end());
	vector <vector<int>> ans;
	vector <int> pb;
	cpy = A;
	for (int i = 0; i < n - 2; i = skip(i, n, 2))
	{
		l = skip(i, n, 0);
		r = n - 1;
		while (l < r)
		{
			sum = A[i] + A[l] + A[r];
			if (sum == 0)
			{
				pb.push_back(A[i]);
				pb.push_back(A[l]);
				pb.push_back(A[r]);
				ans.push_back(pb);
				pb.clear();
				//i = skip(i, n, 2);
				l = skip(l, n, 0);
			}
			else if (sum > 0)
			{
				r = skip(r, n, 1);
				continue;
			}
			else
			{
				l = skip(l, n, 0);
				continue;
			}
		}
	}
	return ans;
}
int main()
{
	int arr[] = { -1, 1, 2, -4 };
	vector <int> a(arr, arr + 4);
	vector <vector<int>> a1;
	a1 = threeSum(a);
	for (int i = 0; i < a1.size(); i++) 
	{
		cout << a1[i][0] << ' ' << a1[i][1] << ' ' << a1[i][2] << endl;
	}
	return 0;
}*/