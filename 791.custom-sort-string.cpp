/*
 * @lc app=leetcode id=791 lang=cpp
 *
 * [791] Custom Sort String
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string customSortString(string order, string s) {
        int arr[26];
        int cnt[26];
        string ans = "";
        for(int i=0;i<26;i++){
            arr[i] = 0;
            cnt[i] = 0;
        }
        for(int i=0;i<order.size();i++){
            arr[order[i]-'a'] = 1;
        }
        for(int i=0;i<s.size();i++){
            if(arr[s[i]-'a']){
                cnt[s[i]-'a']++;
            }
            else{
                ans = ans + s[i];
            }
        }
        for(int i=order.size()-1;i>=0;i--){
            while(cnt[order[i]-'a']){
                ans = order[i] + ans;
                cnt[order[i]-'a']--;
            }
        }
        return ans;
    }
};
// @lc code=end

