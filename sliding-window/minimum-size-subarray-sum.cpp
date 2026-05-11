/*
    Problem: Minimum Size Subarray Sum (LeetCode #209)
    Difficulty: Medium

    Approach: Sliding Window (Variable Size)
    - Expand window by moving right
    - Shrink window from left when sum >= target
    - Track minimum window size

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, minLen = INT_MAX;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum >= target) {
                minLen = min(minLen, right - left + 1);
                sum -= nums[left++];
            }
        }
        return minLen == INT_MAX ? 0 : minLen;
    }
};
