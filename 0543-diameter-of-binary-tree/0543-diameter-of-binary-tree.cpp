class Solution {
public:
    int level(TreeNode* root){
        if(root == NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    int helper(TreeNode* root){
        if(root==NULL) return 0;
        int dia = level(root->right) + level(root->left);
        int max_dia1=helper(root->right);
        int max_dia2=helper(root->left);
        int max_dia = max(dia,max(max_dia1,max_dia2));
        return max_dia;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int max_dia = INT_MIN;
       int dia = helper(root);
        return dia;
    }
};