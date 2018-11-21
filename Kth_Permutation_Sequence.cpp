/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

int n, k, c;
string ans;

long long fact(long long i) 
{
	if (i == 1 || i == 0) 
	{
		return 1;
	}
	return i * fact(i - 1);
}

void fn(string &str, vector<int> &rem) 
{
	if (!rem.size())
	{
		c++;
		if (c != k) 
		{
			return;
		}
	}
	if (c == k) 
	{
		c++;
		ans = str;
		return;
	}
	if (c >= k)
	{
		return;
	}
	for (int i = 0; i < rem.size() && c < k; i++) 
	{
		string stcpy = str;
		vector <int> cpy = rem;
		stcpy.append(to_string(cpy[i]));
		cpy.erase(cpy.begin() + i);
		fn(stcpy, cpy);
	}
}

int main() 
{
	n = 3;
	k = 3;
	//Code begins here
	//n = A;
	//k = B;
	c = 0;
	long long x = fact(n - 1);
	int z = 0;
	while (k > 0) 
	{
		k -= x;
		z++;
	}
	if (k)
		k += x;
	vector <int> rem;
	for (int i = 1; i <= n; i++) 
	{
		rem.push_back(i);
	}
	string start_;
	if (k == 0)
	{
		start_ = start_.append(to_string(z));
		rem.erase(rem.begin() + z - 1);
		for (int i = rem.size() - 1; i >= 0; i--)
		{
			start_.append(to_string(rem[i]));
		}
		ans = start_;
	}
	else if (z) 
	{
		start_ = start_.append(to_string(z));
		rem.erase(rem.begin() + z - 1);
		fn(start_, rem);
	}
	else 
	{
		fn(start_, rem);
	}
	//return ans;
	//Code ends here
	cout << ans << endl;
	return 0;
}*/