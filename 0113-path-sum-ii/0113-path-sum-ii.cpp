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
    void helper(TreeNode* root,int targetSum,vector<vector<int>> &ans,vector<int> res){
        if(root == NULL) return;
        targetSum -= root->val;
        res.push_back(root->val);
        if(targetSum == 0){
            ans.push_back(res);
        }
        helper(root->left,targetSum,ans,res);
        helper(root->right,targetSum,ans,res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> res;
        helper(root,targetSum,ans,res);
        return ans;
    }
};