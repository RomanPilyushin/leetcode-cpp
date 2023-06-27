#include <iostream>
#include <vector>
 
using namespace std;

/*

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.



Example 1:

Input: nums = [1,2,3,1]
Output: true



Example 2:

Input: nums = [1,2,3,4]
Output: false




Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true



*/



bool containsDuplicate(vector<int>& nums)
{

    int sizeArray = nums.size();
    if (sizeArray == 0) return false;


    for (int i = 0; i < sizeArray; i++)
    {
        for (int j = i + 1; j < sizeArray; j++)
        {
            if (nums[i] == nums[j]) return true;
        }
    }

    return false;
}






int main()
{
    vector<int> exp1{ 1, 2, 3, 1 };
    vector<int> exp2{ 1, 2, 3, 4 };
    vector<int> exp3{ 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 };

    std::cout << containsDuplicate(exp1) << std::endl;
    std::cout << containsDuplicate(exp2) << std::endl;
    std::cout << containsDuplicate(exp3) << std::endl;

    //std::cout << "Hello World!\n";
}