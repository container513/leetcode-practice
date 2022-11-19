/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int dp_max[nums.size()];
        int dp_min[nums.size()];
        dp_max[0] = nums[0];
        dp_min[0] = nums[0];
        int ans=dp_max[0];
        for(int i=1;i<nums.size();i++){
            dp_max[i] = max(dp_max[i-1]*nums[i],max(dp_min[i-1]*nums[i],nums[i]));
            dp_min[i] = min(dp_max[i-1]*nums[i],min(dp_min[i-1]*nums[i],nums[i]));
            ans = max(dp_max[i],ans);
        }
        return ans;
    }
};
// @lc code=end

