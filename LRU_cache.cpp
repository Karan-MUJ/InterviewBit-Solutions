/*#include<iostream>
#include<unordered_map>
#include<map>
#include<string>
#include<iterator>

using namespace std;

int curr_time = 0, capa, curr_capacity;
unordered_map <int, int> seek;
map <int, pair<int, int>> M;

int get(int a)
{
	if (seek.find(a) == seek.end()) 
	{
		return -1;
	}
	else 
	{
		pair<int, int> temp = M[seek[a]];
		M.erase(seek[a]);
		M[curr_time] = temp;
		seek[a] = curr_time;
		curr_time++;
		return temp.second;
	}
}

void set(int a, int b)
{
	if (seek.find(a) == seek.end()) 
	{
		if (curr_capacity < capa) 
		{
			pair<int, int> temp(a, b);
			curr_capacity++;
			seek[a] = curr_time;
			M[curr_time++] = temp;
		}
		else 
		{
			pair<int, int> temp(a, b), z;
			map <int, pair<int, int>> ::iterator it = M.begin();
			z = it->second;
			seek.erase(z.first);
			M.erase(it);
			seek[a] = curr_time;
			M[curr_time++] = temp;
		}
	}
	else 
	{
		int key = seek[a];
		seek[a] = curr_time;
		pair <int, int> temp (a, b);
		M.erase(key);
		M[curr_time++] = temp;
	}
}

int main() 
{
	curr_capacity = 0;
	cout << "Enter Capacity : ";
	cin >> capa;
	char c;
	cout << "Enter E whenever you want to stop" << endl;
	cin >> c;
	int a, b;
	while (c - 'E') 
	{
		if (c == 'S') 
		{
			cin >> a >> b;
			set(a, b);
		}
		else 
		{
			cin >> a;
			cout << get(a) << endl;
		}
		cin >> c;
	}
	return 0;
}*/