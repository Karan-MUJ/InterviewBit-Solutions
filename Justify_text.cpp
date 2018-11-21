/*#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> fullJustify(vector<string> &A, int B)
{
	vector <string> arr;
	int n = A.size(), sz, idx = 0;
	//B--;
	string blank;
	for (int i = 0; i < n; i++)
	{
		sz = A[i].size();
		if (sz == 0)
			continue;
		if (B - (sz + idx + 1) > 0)
		{
			blank += A[i];
			blank += ' ';
			idx += sz + 1;
		}
		else if (B - (sz + idx) == 0) 
		{
			blank += A[i];
			//blank += ' ';
			idx += sz;
		}
		else
		{
			while (idx < B)
			{
				blank.push_back(' ');
				idx++;
			}
			//arr.push_back(blank);
			i--;
		}
		if (idx == B) 
		{
			arr.push_back(blank);
			blank = "";
			idx = 0;
		}
	}
	while (idx < B) 
	{
		blank += ' ';
		idx++;
		if (idx == B) 
		{
			arr.push_back(blank);
		}
	}
	return arr;
}

int main() 
{
	vector <string> arr, pri;
	arr.push_back("");
	arr.push_back("must");
	arr.push_back("be");
	arr.push_back("shall");
	arr.push_back("be");
	arr.push_back("text");
	arr.push_back("justification");
	arr.push_back("A");
	pri = fullJustify(arr, 13);
	for (int i = 0; i < pri.size(); i++) 
	{
		cout << pri[i].size() << endl;
		cout << pri[i] << endl;
	}
	return 0;
}*/