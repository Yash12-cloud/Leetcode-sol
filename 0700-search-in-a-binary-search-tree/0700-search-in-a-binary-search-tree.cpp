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
    void search(TreeNode* root,int target,TreeNode* &ans){
        if(root == NULL) return;
        if(target == root->val){
            ans = root;
        }
        if(target < root->val) search(root->left,target,ans);
        if(target > root->val) search(root->right,target,ans);
    }
    TreeNode* searchBST(TreeNode* root, int target) {
        TreeNode* ans = NULL;
        search(root,target,ans);
        return ans;
    }
};