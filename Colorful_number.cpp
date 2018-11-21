/*#include<iostream>
#include<unordered_set>

using namespace std;

int main() 
{
	unordered_set<int> S;
	int n = 0, x, no_of_digits = 0;
	cin >> n;
	x = n;
	while (x) 
	{
		x /= 10;
		no_of_digits++;
	}
	int arr[12] = { 0 };
	x = n;
	for (int i = no_of_digits - 1; i >= 0; i--) 
	{
		arr[i] = n % 10;
		n /= 10;
	}
	int prod = 0;
	for (int i = 0; i < no_of_digits; i++) 
	{
		prod = arr[i];
		if (S.find(prod) == S.end())
		{
			S.insert(prod);
		}
		else
		{
			cout << 0 << endl;
		}
		for (int j = i + 1; j < no_of_digits; j++) 
		{
			if (i == 0 && j == no_of_digits - 1)
				continue;
			prod *= arr[j];
			if (S.find(prod) == S.end())
			{
				S.insert(prod);
			}
			else 
			{
				cout << 0 << endl;
			}
		}
	}
	cout << 1 << endl;
	return 0;
}*/