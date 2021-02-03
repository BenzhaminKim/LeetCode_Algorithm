//https://leetcode.com/explore/learn/card/data-structure-tree/134/traverse-a-tree/928/
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        dfs(root,ans);
        return ans;
    }
    void dfs(TreeNode* root,vector<int>& ans){
        if(!root) return ;
        
        ans.push_back(root->val);
        dfs(root->left,ans);
        dfs(root->right,ans);
        
    }

        vector<int> preorderTraversal_iterative(TreeNode* root) {
        
        stack<TreeNode *> q;
        vector<int> ans;
        if(!root) return ans;
        q.push(root);
        
        while(!q.empty()){
            TreeNode* node = q.top();
            ans.push_back(node->val);
            q.pop();
            if(node->right) q.push(node->right);
            if(node->left) q.push(node->left);
            
        }
        return ans;
    }
};