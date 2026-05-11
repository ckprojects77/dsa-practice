/*
    Problem: Reverse Linked List (LeetCode #206)
    Difficulty: Easy

    Approach: Iterative
    - Use three pointers: prev, curr, next
    - Reverse the next pointer at each node

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
