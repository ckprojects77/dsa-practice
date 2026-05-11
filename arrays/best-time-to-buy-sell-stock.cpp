/*
    Problem: Best Time to Buy and Sell Stock (LeetCode #121)
    Difficulty: Easy

    Approach: Greedy
    - Track minimum price seen so far
    - At each step compute profit if we sold today
    - Update max profit

    Time:  O(n)
    Space: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};
