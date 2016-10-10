#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	// test
	int num = s.find("abcdefg", 328088);
	if(num != string::npos)
	{
		cout << num << endl;
	}
	else
	{
		cout << "no find.." << endl;
	}
	return 0;
}
