/*

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.



Input: nums = [-1, 0, 3, 5, 9, 12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4



Input: nums = [-1, 0, 3, 5, 9, 12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1


*/


#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& nums, int target) 
{
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) 
        {
            return mid;
        }
        else if (nums[mid] < target) 
        {
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
    }
    return -1;
}


int main()
{
    vector<int> exp{ 1, 2, 5, 5, 7, 9, 10 };

    std::cout << binarySearch(exp, 7) << std::endl;
}