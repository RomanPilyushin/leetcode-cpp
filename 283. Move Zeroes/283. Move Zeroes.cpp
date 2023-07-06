/*

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


Example 1:
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]


*/

#include <vector>
#include <iostream>
using namespace std;



void moveZeroes(vector<int>& nums) 
{
    int i = 0;
    int j = 0;

    while (i < nums.size() && j < nums.size()) 
    {
        if (nums[j] != 0) 
        {
            swap(nums[i], nums[j]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
}

// 0 1 0 3 12
// 1 0 0 3 12
// 1 3 0 0 12
// 1 3 12 0 0


int main()
{
    vector<int> exp{ 0, 1, 0, 3, 12 };
    
    moveZeroes(exp);

    for (auto i : exp)
        std::cout << i << ' ';
}
