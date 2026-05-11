/*
    Problem: Two Sum (LeetCode #1)
    Difficulty: Easy
    
    Approach: HashMap
    - Store each element and its index in a map
    - For each element, check if (target - element) exists in map
    
    Time:  O(n)
    Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.count(complement)) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
