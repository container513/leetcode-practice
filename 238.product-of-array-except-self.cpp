/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int tmp=1;
        ans.resize(nums.size(),1);
        for(int i=0;i<nums.size();i++){
            ans[i]*=tmp;
            tmp*=nums[i];
        }
        tmp = 1;
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=tmp;
            tmp*=nums[i];
        }
        return ans;
        
    }
};
// @lc code=end

