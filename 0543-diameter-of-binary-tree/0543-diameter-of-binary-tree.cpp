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
    int level(TreeNode* root){
    if(root == NULL) return 0; 
    int levLeft = level(root->left); 
    int levRight = level(root->right);
    int ans = 1 + max(levLeft,levRight);
    return max(1,ans);
    }
    void helper(TreeNode* root , int  &maxDia){
        if(root == NULL) return;
        int dia = level(root->left)+level(root->right);
        maxDia = max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia = 0;
        helper(root,maxDia);
        return maxDia;
    }
};