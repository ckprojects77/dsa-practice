/*
    Problem: Maximum Subarray (LeetCode #53)
    Difficulty: Medium

    Approach: Kadane's Algorithm
    - Keep a running sum, reset to 0 if it goes negative
    - Track the maximum sum seen

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curr = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            curr = max(nums[i], curr + nums[i]);
            maxSum = max(maxSum, curr);
        }
        return maxSum;
    }
};
