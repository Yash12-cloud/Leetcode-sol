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
    void inorder(TreeNode* root,vector<int> &ans){
        if(root == NULL) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    void fillTree(TreeNode* root,vector<int> &ans,int &count){
        if(root == NULL) return;
        fillTree(root->left,ans,count);
        root->val = ans[count++];
        fillTree(root->right,ans,count);
    }
    TreeNode* bstToGst(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);

        //prefix sum
        reverse(ans.begin(),ans.end());
        for(int i = 1; i < ans.size(); i++){
            ans[i] = ans[i]+ans[i-1];
        }
        reverse(ans.begin(),ans.end());
        
        int count = 0;
        fillTree(root,ans,count);
        return root;
    }
};