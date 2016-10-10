#include <iostream>
#include <string>
using namespace std;
// add

int main()
{
	// init
	string s;
	cin >> s;  // input
	int num = s.find("abcdefg", 328088);
	if(num != string::npos)
	{
		cout << num << endl;
	}
	else
	{
		cout << "no find" << endl;
	}
	return 0;
}
