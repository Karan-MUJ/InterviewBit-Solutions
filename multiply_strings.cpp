/*#include<string>
#include<iostream>

using namespace std;

void multiply(string &s, int x)
{
	int carry = 0, prod = 0, idx = s.size() - 1;
	while (idx >= 0)
	{
		prod = ((s[idx] - '0') * x) + carry;
		carry = prod / 10;
		s[idx] = (prod % 10) + '0';
		idx--;
	}
	while (carry > 0) 
	{
		s.insert(s.begin(), (carry % 10) + '0');
		carry /= 10;
	}
	return;
}

void add(string &a, string &b) 
{
	int sum = 0, carry = 0, idx1 = a.size() - 1, idx2 = b.size() - 1;
	while (idx1 >= 0 && idx2 >= 0)
	{
		sum = a[idx1] + b[idx2] + carry - '0' - '0';
		carry = sum / 10;
		a[idx1] = (sum % 10) + '0';
		idx1--;
		idx2--;
	}
	while (idx1 >= 0)
	{
		a[idx1] = a[idx1] + carry - '0';
		carry /= 10;
		idx1--;
	}
	while (idx2 >= 0)
	{
		a.insert(a.begin(), b[idx2] + carry);
		carry /= 10;
		idx2--;
	}
	while (carry) 
	{
		a.insert(a.begin(), (carry % 10) + '0');
		carry /= 10;
	}
	return;
}

string power(string A, string B)
{
	string sum, tmp;
	int zeros = 0, copy;
	while (B.size() > 0) 
	{
		tmp = A;
		copy = zeros;
		multiply(tmp, B[B.size() - 1] - '0');
		while (copy) 
		{
			copy--;
			tmp += '0';
		}
		add(sum, tmp);
		B.pop_back();
		zeros++;
	}
	return sum;
}

int main()
{
	cout << power("12378925", "356987") << endl;
	return 0;
}*/