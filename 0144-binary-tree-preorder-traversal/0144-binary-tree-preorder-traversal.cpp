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
        // Recursive Code

        // if(root == NULL) return;
        // ans.push_back(root->val);
        // PreOrder(root->left,ans);
        // PreOrder(root->right,ans);

        // Iterative code

        stack<TreeNode*> st;
        if(root == NULL) return;
        st.push(root);
        while(st.size() > 0){
            TreeNode* temp = st.top();
            ans.push_back(st.top()->val);
            st.pop();
            if(temp->right != NULL)st.push(temp->right);
            if(temp->left != NULL)st.push(temp->left);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        PreOrder(root,ans);
        return ans;
    }
};