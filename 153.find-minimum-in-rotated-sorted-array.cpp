/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int mid;
        while((r-l)>1){
            mid = (l+r)/2;
            if(nums[mid]>nums[r]){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        return nums[l]>nums[r]?nums[r]:nums[l];
    }
};
// @lc code=end

