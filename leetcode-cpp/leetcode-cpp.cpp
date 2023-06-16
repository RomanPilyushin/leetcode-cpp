#include <iostream>
#include <cstddef>
#include <vector>
using namespace std;


class Solution
{
public:
    int searchInsert(std::vector<int>& nums, int target)
    {
        int start = 0;
        int mid = 0;
        int end = nums.size();

        if (target > nums[end - 1])
        {
            return end;
        }
        while (start <= end)
        {
            mid = (start + end) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }

            if (target < nums[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }

        }
        return  start;
    }
};


int main()
{
    vector<int> vect {1, 3, 5, 6};
    int target = 5;

    Solution x;
    cout << x.searchInsert(vect, target);

}