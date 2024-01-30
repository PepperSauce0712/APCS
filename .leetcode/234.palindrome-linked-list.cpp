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
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        if(fast != nullptr) slow = slow->next;
        
        ListNode *left = head;
        ListNode *right = reverse(slow);

        while (right != nullptr)
        {
            if(left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }
        
        return true;
    }

    ListNode* reverse(ListNode* head){
        ListNode *pre = nullptr;
        ListNode *cur = head;
        while (cur != nullptr)
        {
            ListNode *nxt = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nxt;
        }
        return pre;
    }
};
// @lc code=end

