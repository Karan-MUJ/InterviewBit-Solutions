/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

auto mod = pow(10, 9) + 7;

int main() 
{
	int A = 4;
	//Code begins here
	vector <int> dp(2 * A + 1);
	dp[0] = 1, dp[2] = 1;
	for (int i = 4; i <= 2 * A; i += 2) 
	{
		for (int j = 0; j < i - 1; j += 2)
		{
			dp[i] += dp[i - 2 - j] * dp[j];
		}
	}
	cout << dp[2 * A] << endl;
	return 0;
}*/