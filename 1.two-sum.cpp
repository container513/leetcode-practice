/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m[target-nums[i]]){
                return {m[target-nums[i]]-1,i};
            }
            else{
                m[nums[i]]=i+1;
            }
        }
        return {0,1};
    }
};
// @lc code=end

