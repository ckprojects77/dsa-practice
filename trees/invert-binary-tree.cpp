/*
    Problem: Invert Binary Tree (LeetCode #226)
    Difficulty: Easy

    Approach: Recursion (DFS)
    - Swap left and right child at each node
    - Recursively invert both subtrees

    Time:  O(n)
    Space: O(h) — h is height of tree
*/

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return nullptr;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
