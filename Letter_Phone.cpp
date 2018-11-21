/*#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<int> arr[10];
vector <string> ans;
string cpy;
int n;

void rec(string A,int i) 
{
	if (i == n) 
	{
		ans.push_back(A);
		return;
	}
	for (int j = 0; j < arr[cpy[i] - '0'].size(); j++) 
	{
		A.push_back((char)arr[cpy[i] - '0'][j]);
		rec(A, i + 1);
		A.pop_back();
	}
}

int main() 
{
	string A = "4";
	//Code begin here
	cpy = A;
	n = A.size();
	arr[0].push_back((int)'0');
	arr[1].push_back((int)'1');
	arr[2].push_back((int)'a');
	arr[2].push_back((int)'b');
	arr[2].push_back((int)'c');
	arr[3].push_back((int)'d');
	arr[3].push_back((int)'e');
	arr[3].push_back((int)'f');
	arr[4].push_back((int)'g');
	arr[4].push_back((int)'h');
	arr[4].push_back((int)'i');
	arr[5].push_back((int)'j');
	arr[5].push_back((int)'k');
	arr[5].push_back((int)'l');
	arr[6].push_back((int)'m');
	arr[6].push_back((int)'n');
	arr[6].push_back((int)'o');
	arr[7].push_back((int)'p');
	arr[7].push_back((int)'q');
	arr[7].push_back((int)'r');
	arr[7].push_back((int)'s');
	arr[8].push_back((int)'t');
	arr[8].push_back((int)'u');
	arr[8].push_back((int)'v');
	arr[9].push_back((int)'w');
	arr[9].push_back((int)'x');
	arr[9].push_back((int)'y');
	arr[9].push_back((int)'z');
	string str;
	rec(str, 0);
	//Code ends here
	for (int i = 0; i < ans.size(); i++) 
	{
		cout << ans[i] << endl;
	}
	return 0;
}*/