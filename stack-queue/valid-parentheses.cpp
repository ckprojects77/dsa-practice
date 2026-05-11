/*
    Problem: Valid Parentheses (LeetCode #20)
    Difficulty: Easy

    Approach: Stack
    - Push opening brackets onto stack
    - For closing brackets, check if top of stack matches
    - Stack should be empty at the end

    Time:  O(n)
    Space: O(n)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c == ')' && st.top() != '(') return false;
                if (c == '}' && st.top() != '{') return false;
                if (c == ']' && st.top() != '[') return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
