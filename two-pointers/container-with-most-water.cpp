/*
    Problem: Container With Most Water (LeetCode #11)
    Difficulty: Medium

    Approach: Two Pointers
    - Start with widest container (left=0, right=n-1)
    - Move the pointer with smaller height inward
    - Track max area throughout

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;
        while (left < right) {
            int water = min(height[left], height[right]) * (right - left);
            maxWater = max(maxWater, water);
            if (height[left] < height[right]) left++;
            else right--;
        }
        return maxWater;
    }
};
