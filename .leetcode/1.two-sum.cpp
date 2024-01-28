#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valtoIndex;
        for(int i = 0; i<nums.size(); i++){
            int need = target - nums[i];
            if(valtoIndex.count(need)){
                return vector<int>{valtoIndex[need], i};
            }

            valtoIndex[nums[i]] = i;
        }
        return vector<int>{};
    }
};
// @lc code=end

