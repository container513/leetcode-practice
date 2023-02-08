/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();
        int mid;
        while(r-l>1){
            mid = (l+r)/2;
            if((nums[mid]>nums[l] && nums[mid]>target && nums[l]<=target) || (nums[mid]<=nums[l] && (nums[mid]>target || target>=nums[l]))){
                r = mid;
            }
            else{
                l = mid;
            }
        }
        return nums[l]==target?l:-1;
    }
};
// @lc code=end


MaxSubarray(A){
    ans = A[1]
    r[1..n] = {0}
    r[1] = A[1]
    for i = 2 to n{
        r[i] = max(r[i-1]+A[i],A[i]);
        ans = max(ans, r[i]);
    }
    return ans;
}