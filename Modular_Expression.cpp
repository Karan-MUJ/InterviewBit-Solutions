/*#include<iostream>

using namespace std;

long long pw(int A, int B, int C) 
{
	if (B == 0)
		return 1;
	return (A * pw(A, B - 1, C)) % C;
}

int main() 
{
	int A, B, C;
	cin >> A >> B >> C;
	cout << pw(A, B, C) << endl;
	return 0;
}*/