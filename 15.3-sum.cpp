/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_set<int> s;
        set<vector<int>> ss;

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(s.count(0-nums[i]-nums[j])){
                    if(!ss.count({nums[i],nums[j],-nums[i]-nums[j]})){
                        ans.push_back({nums[i],nums[j],-nums[i]-nums[j]});
                        ss.insert({nums[i],nums[j],-nums[i]-nums[j]});
                    }
                }
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};
// @lc code=end

