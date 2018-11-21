/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

int n, k;
string ans;

long long fact(int i) 
{
	if (i == 0 || i == 1) 
	{
		return 1;
	}
	return i * fact(i - 1);
}

string rec(string str, vector <int> &A, int k) 
{
	if (!A.size())
	{
		return str;
	}
	long long x = fact(A.size() - 1);
	if (k % x == 0) 
	{
		str.append(to_string(A[(k - 1) / x]));
		A.erase(A.begin() + (k - 1) / x);
		for (int i = A.size() - 1; i >= 0; i--) 
		{
			//if (i != (k - 1) / x)
				str.append(to_string(A[i]));
		}
		return str;
	}
	else 
	{
		str.append(to_string(A[k / x]));
		A.erase(A.begin() + k / x);
		k = k % x;
		return rec(str, A, k);
	}	
}

int main() 
{
	int A = 5, B = 23;
	//Code starts here
	vector <int> send;
	n = A;
	k = B;
	for (int i = 1; i <= n; i++) 
	{
		send.push_back(i);
	}
	cout << rec("", send, B) << endl;
	//Code ends here
	//cout << ans << endl;
	return 0;
}*/