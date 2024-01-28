#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = removeElement(nums, 0);
        for(; k<nums.size(); k++){
            nums[k] = 0;
        }
    }
    
    int removeElement(vector<int>& nums, int val) {
    int fast = 0, slow = 0;
    while (fast<nums.size())
    {
        if(nums[fast] != val){
            nums[slow] = nums[fast];
            slow++;
        }
        fast++;
    }
    return slow;
}
};
// @lc code=end

