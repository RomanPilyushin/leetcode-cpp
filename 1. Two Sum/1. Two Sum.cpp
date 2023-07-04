/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].


Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]


Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]



*/

#include <iostream>
#include <vector>
using namespace std;

//Brute Force
vector<int> twoSum(vector<int>& nums, int target) 
{
        for (int i = 0; i < nums.size(); i++) 
        {
            for (int j = i + 1; j < nums.size(); j++) 
            {
                if (nums[i] + nums[j] == target) 
                {
                    return { i, j };
                }
            }
        }
        return {};
}


int main()
{
    vector<int> exp1{ 2, 7, 11, 15 };
    //vector<int> exp2{ 3, 2, 4 };

    vector<int> result = twoSum(exp1, 9);

    for (auto i : result)   
        std::cout << i << ' ';

    //std::cout << twoSum(exp1, 9) << std::endl;
    //std::cout << twoSum(exp2, 6) << std::endl;
}
