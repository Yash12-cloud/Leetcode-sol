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
    void PreOrder(TreeNode* root,vector<int> &ans){
        if(root == NULL) return;
        PreOrder(root->left,ans);  // call 1
        ans.push_back(root->val);  // Work
        PreOrder(root->right,ans); // call 2
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        PreOrder(root,ans);
        return ans;
    }
};