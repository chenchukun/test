#include <iostream>
#include <cmath>
using namespace std;
const int N = 3001;
int val[N];
// own

int bin_reverse(int x)
{
	// 为什么必须是unsigned？
    unsigned int flag = 0x80000000;
    int i = 0;
    for(i=0; i<32; ++i)
    {
        if((x & flag) != 0)
        {
            break;
        }
        flag >>= 1;
    }
    int n = 0;
    int ret = 0;
    for(;i<32; ++i)
    {
        int t = (x&flag)!=0? 1 : 0;
        ret += t * pow(2, n++);
		flag >>= 1;
    }
    return ret;
}

int main()
{
	int n;
    
    while(cin >> n)
    {
        for(int i=0; i<n; ++i)
        {
            cin >> val[i];
        }
        for(int i=0; i<n; ++i)
        {
            if(val[i]%2 != 0)
            {
                cout << val[i] << " ";
            }
            else
            {
                cout << bin_reverse(val[i]) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
