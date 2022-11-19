/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int tmp = nums[0];
        int ans=tmp;
        for(int i=1;i<nums.size();i++){
            tmp = max(tmp+nums[i],nums[i]);
            if(tmp>ans) ans= tmp;
        }
        return ans;
    }
};
// @lc code=end

