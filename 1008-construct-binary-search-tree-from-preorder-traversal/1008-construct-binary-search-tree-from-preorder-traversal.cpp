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
    void insertNode(TreeNode* &root,int value){
        if(root == NULL){
            root = new TreeNode(value);
            return;
        }
        if(value < root->val) insertNode(root->left,value);
        if(value > root->val) insertNode(root->right,value);
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        for(int i = 0;i<preorder.size();i++){
            insertNode(root,preorder[i]);
        }
        return root;
    }
    
};