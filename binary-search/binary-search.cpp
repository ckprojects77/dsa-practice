/*
    Problem: Binary Search (LeetCode #704)
    Difficulty: Easy

    Approach: Classic Binary Search
    - Maintain low and high pointers
    - Check mid each iteration
    - Narrow search space by half each time

    Time:  O(log n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return -1;
    }
};
