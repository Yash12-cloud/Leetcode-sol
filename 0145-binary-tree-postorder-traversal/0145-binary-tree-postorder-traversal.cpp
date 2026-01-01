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
    void PostOrder(TreeNode* root, vector<int> &ans){
        // Recursive code
        // if(root == NULL) return;
        // PostOrder(root->left,ans);
        // PostOrder(root->right,ans);
        // ans.push_back(root->val);

        // Iterative code

        stack<TreeNode*> st;
        if(root!=NULL) st.push(root);
        while(st.size() > 0){
            TreeNode* temp = st.top();
            ans.push_back(temp->val);
            st.pop();

            if(temp->left != NULL) st.push(temp->left);
            if(temp->right != NULL) st.push(temp->right);//ya upar rahna cheya 
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        PostOrder(root,ans);
        // only for iterative
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};