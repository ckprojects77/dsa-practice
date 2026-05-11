/*
    Problem: Climbing Stairs (LeetCode #70)
    Difficulty: Easy

    Approach: Dynamic Programming (Fibonacci pattern)
    - To reach step n, you come from step n-1 or n-2
    - dp[n] = dp[n-1] + dp[n-2]
    - Optimize space by only keeping last two values

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int prev2 = 1, prev1 = 2;
        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
