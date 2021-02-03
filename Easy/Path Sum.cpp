//https://leetcode.com/explore/learn/card/data-structure-tree/17/solve-problems-recursively/537/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,0,targetSum);
    }
    bool dfs(TreeNode* root, int sum, int target){
        if(!root) return false;
        if(!root->left &&!root->right && sum+root->val == target) return true;
        
        return dfs(root->left, sum+root->val, target) || dfs(root->right, sum+root->val, target);
    }
};