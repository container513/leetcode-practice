/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mmin = prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            ans = max(ans,prices[i]-mmin);
            mmin = min(mmin,prices[i]);
        }
        return ans;
    }
};
// @lc code=end

