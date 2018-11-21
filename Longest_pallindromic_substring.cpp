/*#include<iostream>
#include<string>

using namespace std;

string longestPalindrome(string A)
{
	int s, e, mx = 0, c, n = A.size(), idx = 0, idx2 = 0, t1, t2;
	string res;
	for (int i = 0; i < n; i++)
	{
		s = i - 1;
		e = i + 1;
		c = 1;
		if (i > 0)
		{
			if (A[i] == A[i - 1])
			{
				t1 = i - 1;
				t2 = i;
				c = 0;
				while (t1 >= 0 && t2 < n && A[t1] == A[t2])
				{
					c += 2;
					t1--;
					t2++;
					if (c > mx)
					{
						idx = t1 + 1;
						idx2 = t2 - 1;
						mx = c;
					}
				}
			}
		}
		c = 1;
		while (s >= 0 && e < n)
		{
			if (A[s] == A[e])
			{
				c += 2;
				if (c > mx)
				{
					idx = s;
					idx2 = e;
					mx = c;
				}
			}
			else
			{
				break;
			}
			s--;
			e++;
		}
	}
	while (idx <= idx2)
	{
		res += A[idx];
		idx++;
	}
	return res;
}
int main() 
{
	cout << longestPalindrome("aab") << endl;
	return 0;
}*/