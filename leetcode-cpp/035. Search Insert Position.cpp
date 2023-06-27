#include <vector>
#include <iostream>
/*

Given a sorted array of distinct integers and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4


*/





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



int main() {
    std::cout << "Hello";
}