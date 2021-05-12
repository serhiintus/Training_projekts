#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string swap(string s);

int main()
{
	string str;
	getline(cin, str);
	string twostr;
	twostr = swap(str);
	cout << twostr << endl;
	int size = str.size();
	for (int i = size - 1; i >= 0; i--)
	{
		cout << str[i];
	}
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	cout << endl << str;
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << endl << str;
	

	return 0;
}

string swap(string s)
{
	int size = s.size();
	char buf;
	int i = 0; int j = size - 1;
	while (i < j)
	{
		buf = s[i];
		s[i] = s[j];
		s[j] = buf;
		i++;
		j--;
	}
	return s;
}
