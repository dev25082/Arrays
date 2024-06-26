/*
1752. Check if Array Is Sorted and Rotated


Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.
There may be duplicates in the original array.
Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.



Example 1:
Input: nums = [3,4,5,1,2]
Output: true

Example 2:
Input: nums = [2,1,3,4]
Output: false
  
Example 3:
Input: nums = [1,2,3]
Output: true
  */


class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
//nums[i] > nums[i+1] ==>  1 time sorted and rotated   nums = [3,4,5,1,2]
        for(int i=0;i<n-1;i++){
            if(nums[i] > nums[i+1]) count++;
        }
        if(nums[n-1] > nums[0]) count++;  // nums = [1,2,3]
        return count <= 1;       // nums = [1,1,1] ( < )
    }
};
