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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return NULL;
        if(root->right == NULL && val > root->val) root->right = new TreeNode(val);
        if(root->left == NULL && val < root->val) root->left = new TreeNode(val);
        if(val < root->val) insertIntoBST(root->left,val);
        if(val > root->val) insertIntoBST(root->right,val);

        return root;
    }
};