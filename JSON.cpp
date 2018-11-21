/*vector<string> prettyJSON(string str)
{
	vector <string> arr;
	int n = str.size(), idx = 0;
	if (n == 0) 
	{
		return arr;
	}
	str.erase(remove(str.begin(), str.end(), ' '), str.end());
	string cur = "", indent = "";
	while (idx < n) 
	{
		cur.push_back(str[idx]);
		switch (str[idx]) 
		{
			case ',': 
			{
				idx++;
				arr.push_back(cur);
				cur = indent;
				break;
			}
			case ':': 
			{
				idx++;
				if (str[idx] == '{' || str[idx] == '[')
				{
					arr.push_back(cur);
					cur = indent;
				}
				break;
			}
			case '{':
			case '[': 
			{
				idx++;
				if (idx < n && !(str[idx] == '}' || str[idx] == ']')) 
				{
					indent.push_back('\t');
				}
				arr.push_back(cur);
				cur = indent;
				break;
			}
			case ']':
			case '}': 
			{
				idx++;
				if (str[idx] == ',')
					break;
				if (str[idx] == ']' || str[idx] == '}') 
				{
					if (!indent.empty())
						indent.pop_back();
				}
				arr.push_back(cur);
				cur = indent;
				break;
			}		
			default: 
			{
				idx++;
				if (str[idx] == ',')							// COMMENT THIS IF BLOCK
					break;
				if (idx < n && (str[idx] == '}' || str[idx] == ']'))
					if (!indent.empty())
					{
						arr.push_back(cur);
						if (!indent.empty())
							indent.pop_back();
						cur = indent;
						break;
					}
				if (str[idx] == '{' || str[idx] == '[')			// COMMENT THIS IF BLOCK opening braces won't come after a normal character without ',' or ':' which we've already handled
				{
					arr.push_back(cur);
					//indent.push_back('\t');
					cur = indent;
					break;
				}
				break;
			}
		}
	}
	return arr;
}*/