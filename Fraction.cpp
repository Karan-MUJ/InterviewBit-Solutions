/*#include<iostream>
#include<string>
#include<unordered_set>
#include<unordered_map>

using namespace std;

string fn(int A, int B) 
{
	long long num = A, den = B;
	string sol;
	if (!den) 
	{
		return sol;
	}
	if (!num) 
	{
		return "0";
	}
	(num * den) < 0 ? sol.append("-") : sol ;
	sol.append(to_string(num / den));
	if (!(A % B)) 
	{
		return sol;
	}
	sol.append(".");
	unordered_map <int, int> M;
	for (long long rem = (num % den); rem; rem %= den) 
	{
		if (M.find(rem) != M.end()) 
		{
			sol.insert(M[rem], 1, '(');
			sol.append(")");
			return sol;
		}
		M[rem] = sol.size();
		rem *= 10;
		sol.append(to_string(rem / den));
	}
	return sol;
}

int main() 
{
	int A = 1, B = 6;
	cout << fn(A, B) << endl;
	return 0;
}*/