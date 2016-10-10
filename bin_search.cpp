#include <iostream>
#include <vector>
using namespace std;

class LeftMostAppearance {
public:
    int findPos(vector<int> arr, int n, int num) {
        // write code here
        if(0 == n)
            return -1;
        size_t left = 0;
        size_t right = n - 1;
        int index = -1;
        
        while(left <= right)
        {
            size_t mid = left + (right-left)/2;
            if(arr[mid] >= num)
            {
                right = mid - 1;
                index = arr[mid]==num? mid: index;
            }
            else
            {
                left = mid + 1;
            }
        }
        return index;
    }
};

int main()
{
	LeftMostAppearance m;
	vector<int> v{1,2,3,3,4,6};
	cout << m.findPos(v, 5, 3) << endl;
	return 0;
}
