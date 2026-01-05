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
    void isPath(TreeNode* root,int targetSum,int currSum,bool &flag){
        if(root == NULL) return;
        currSum += root->val; 
        if(currSum == targetSum){
            flag = true;
        }

        isPath(root->left,targetSum,currSum,flag);
        isPath(root->right,targetSum,currSum,flag);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool flag = false;
        isPath(root,targetSum,0,flag);
        return flag;
    }
};