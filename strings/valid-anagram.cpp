/*
    Problem: Valid Anagram (LeetCode #242)
    Difficulty: Easy

    Approach: Frequency Count
    - Count character frequencies in both strings
    - Compare the two frequency arrays

    Time:  O(n)
    Space: O(1) — fixed 26-size array
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int freq[26] = {0};
        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;
        for (int f : freq) if (f != 0) return false;
        return true;
    }
};
