//https://leetcode.com/explore/learn/card/data-structure-tree/17/solve-problems-recursively/535/
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
int ans = 0;
public:
    int maxDepth(TreeNode* root) {
        if(!root) return ans;
        dfs(root,1);
        return ans;
    }
    void dfs(TreeNode* root, int depth){
        if(!root) return;
            ans = max(ans,depth);

        
        dfs(root->left,depth+1);
        dfs(root->right,depth+1);
        }
};