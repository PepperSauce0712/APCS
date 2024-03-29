#include <bits/stdc++.h>
using namespace std;
class ListNode{
    int val;
    ListNode next;

    ListNode(int x){
        val=x;
    }
}
/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size()-1;
        while (left < right){
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        
    }
};
// @lc code=end

