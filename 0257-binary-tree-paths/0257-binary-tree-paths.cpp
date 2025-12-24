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
    void helper(TreeNode* root, string s, vector<string> &str){
        if(root == NULL) return;
        s += "->";
        s += to_string(root->val);

        helper(root->left,s,str);

        helper(root->right,s,str);

        if(root->left == NULL && root->right == NULL) str.push_back(s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> str;
        string s = to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            str.push_back(s);
            return str;
        }
        helper(root->left,s,str);
        helper(root->right,s,str);
        return str;
    }
};